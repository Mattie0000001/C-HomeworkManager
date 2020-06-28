#include "tea.h"
#include "ui_tea.h"
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTabWidget>

tea::tea(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::tea)
{
  ui->setupUi(this);

}

tea::~tea()
{
  delete ui;
}

void tea::on_pushButton_clicked()//返回
{
  this->hide();
}

void tea::on_pushButton_2_clicked()//刷新
{

}

void tea::init2(QString id)
{
  teaid=id;
  QString info2 = QString("id  = %1").arg(id);
  QString select_sql = QString("select id, teaName, courseID from %1 where %2").arg("teacher", info2);
  QSqlQuery query2(select_sql);
  query2.exec();
  query2.first();
  //查找出来教师信息
  teaID = query2.value(0).toString();
  teaName = query2.value(1).toString();
  courseID = query2.value(2).toString();

  //在框里显示
  ui->textEdit->setText(teaID);
  ui->textEdit_2->setText(teaName);
  ui->textEdit_3->setText(courseID);

  //查找学生信息
QString select_sql2;
if (id=="001")
{
      select_sql2 = "select id,stuname,week,prob_id,prob_status from homework";

}

 else if(id=="002")
{
      select_sql2 = "select id,stuname,week,calc_id,calc_status from homework";

}

 else if(id=="003")
{
      select_sql2 = "select id,stuname,week,phy_id,phy_status from homework";

}

 else if(id=="004")
{
      select_sql2 = "select id,stuname,week,circ_id,circ_status from homework";

}

else  if(id=="005")
{
      select_sql2 = "select id,stuname,week,draw_id,draw_status from homework";

}
else
{
      qDebug() << "none";
}

qDebug() << select_sql2;
QSqlQuery query3(select_sql2);
//建立表格
if (query3.exec())
{
while (query3.next()) {

    QString  stuid= query3.value(0).toString();
    QString  stuname= query3.value(1).toString();
    QString  week= query3.value(2).toString();
    QString  subjects= query3.value(3).toString();
    int  status= query3.value(4).toInt();
    QString status2;
    if (status) {
        status2 = "yes";
    } else {
        status2 = "no";
    }

    qDebug() << "student info" << stuid << stuname << week << subjects << status;

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
    item_status->setText(status2);

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
count(id);
}

void tea::count(QString id)
{

    QString select_sql3;
  if(id=="001")
{
  select_sql3="SELECT prob_status, COUNT(*) FROM homework GROUP BY prob_status";
}

  else if(id=="002")
{
  select_sql3 =  "SELECT calc_status, COUNT(*) FROM homework GROUP BY calc_status";
}

  else if(id=="003")
{
  select_sql3 = "SELECT phy_status, COUNT(*) FROM homework GROUP BY phy_status";
}

  else if(id=="004")
{
  select_sql3= "SELECT circ_status, COUNT(*) FROM homework GROUP BY circ_status";
}

  else if(id=="005")
{
  select_sql3= "SELECT draw_status, COUNT(*) FROM homework GROUP BY draw_status";
}

QSqlQuery query4(select_sql3);
query4.exec();

while (query4.next()) {

    QString  statuses= query4.value(0).toString();
    QString  record= query4.value(1).toString();

    qDebug() << statuses << record;

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
    row3++;

}
}



