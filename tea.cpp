#include "tea.h"
#include "ui_tea.h"

tea::tea(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::tea)
{
  ui->setupUi(this);
  //打开hwdetail
  p_detail = new hwdetail;
  connect(this, &tea::signal_opendetail,this, &tea::slots_opendetail );
  //从hwdetail返回
  connect(p_detail, &hwdetail::teacher_show, this, &tea::teacher_open);

}

tea::~tea()
{
  delete ui;
}

void tea::on_pushButton_clicked()//返回
{
  this->hide();
  mainwindow_show();
}

void tea::on_pushButton_2_clicked()//刷新
{
}

void tea::init2(QString id)
{
  teaid =id;
  QString info2 = QString("id  = %1").arg(id);
  QString select_sql = QString("select id, teaName, courseID from %1 where %2").arg("teacher", info2);
  QSqlQuery query(select_sql);
  query.exec();
  query.first();
  //查找出来教师信息
  teaID = query.value(0).toString();
  teaName = query.value(1).toString();
  courseID = query.value(2).toString();

  //在框里显示
  ui->textEdit->setText(teaID);
  ui->textEdit_2->setText(teaName);
  ui->textEdit_3->setText(courseID);

  //查找学生信息
  QRegExp rx("([a-z]+)[0-9]+");
  int pos = rx.indexIn(courseID);
  if (pos > -1) {
      subjects = rx.cap(1);
  }
  QString select_sql2 = QString("SELECT id,stuname,week,%1_status FROM homework").arg(subjects);

  qDebug() << select_sql2;
  QSqlQuery query3(select_sql2);

//建立表格
if (query3.exec())
{
while (query3.next()) {
    stuid= query3.value(0).toString();
    stuname= query3.value(1).toString();
    week = query3.value(2).toString();
    int  status2 = query3.value(3).toInt();
    if (status2) {
        status = "Submitted";
    } else {
        status = "Undone";
    }

    QTableWidgetItem *item_stuid = new QTableWidgetItem;
    QTableWidgetItem *item_stuname = new QTableWidgetItem;
    QTableWidgetItem *item_week = new QTableWidgetItem;
    QTableWidgetItem *item_subjects = new QTableWidgetItem;
    QTableWidgetItem *item_status = new QTableWidgetItem;

    //创建特定变量用来给表格赋值
    item_stuid->setText(stuid);
    item_stuname->setText(stuname);
    item_week->setText(week);
    item_subjects->setText(subjects);

    //建立表格，用上述变量填充表格
    p_tablestu = ui->tableWidget;
    p_tablestu->insertRow(row2); // 插入一行
    p_tablestu->setItem(row2 , 0 , item_stuid);
    p_tablestu->setItem(row2 , 1 , item_stuname);
    p_tablestu->setItem(row2 , 2 , item_week);
    p_tablestu->setItem(row2 , 3 , item_subjects);
    p_tablestu->setItem(row2 , 4 , item_status);

    row2++;
    }
}
else
{
    qDebug() << query3.lastError().text();
}
    count(subjects);

}

void tea::count(QString course)
{

    QString select_sql3 = QString("SELECT %1_status, COUNT(*) FROM homework GROUP BY %1_status").arg(course);
    QSqlQuery query4(select_sql3);
    query4.exec();

while (query4.next()) {
    QString  statuses= query4.value(0).toString();
    QString  record= query4.value(1).toString();
    QString status2;
    if (statuses == "2") {
        status2 = "Submitted";
    } else {
        status2 = "Undone";
    }

    QTableWidgetItem *item_statuses = new QTableWidgetItem;
    QTableWidgetItem *item_record= new QTableWidgetItem;

    //创建特定变量用来给表格赋值
    item_statuses->setText(statuses);
    item_record->setText(record);

    //建立表格，用上述变量填充表格
    p_tablestu2=ui->tableWidget_2;
    p_tablestu2->insertRow(row3); // 插入一行
    p_tablestu2->setItem(row3 , 0 , item_statuses);
    p_tablestu2->setItem(row3 , 1 , item_record);
    }
}


void tea::on_pushButton_3_clicked()
{
  emit this->signal_opendetail();

}

//查看作业内容的信号函数和槽函数
void tea::slots_opendetail()
{
  p_detail = new hwdetail;
  p_detail->show_hwdetail(courseID);
  this->hide();
  p_detail->show();
}

//从detail返回teacher
void tea::teacher_open()
{
   this->show();
}
