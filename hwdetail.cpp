#include "hwdetail.h"
#include "ui_hwdetail.h"
#include <QString>

hwdetail::hwdetail(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::hwdetail)
{
  ui->setupUi(this);

  p_addhw = new addhw;
  p_updatehw = new updatehw;
  connect(p_addhw, &addhw::hwdetail_show, this, &hwdetail::hwdetail_open);
  connect(p_updatehw, &updatehw::hwdetail_show, this,&hwdetail::hwdetail_open);

}

hwdetail::~hwdetail()
{
  delete ui;
}


void hwdetail::show_hwdetail(QString ID)
{
  storeID = ID;//用于在本类函数之间传参
  QDate current_date = p_time->currentDate(); // 当前日期
  int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
  int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
  week = (current_day_of_year - init_day_of_year)/7 + 1;
  //获取周数

  QString select_detail = QString("select * from detail_hw where courseID = '%1' and week = %2").arg(ID).arg(week);
  QSqlQuery query5(select_detail);
  query5.exec();
  query5.first();

  //建立表格显示作业
  if (query5.exec())
  {
  while (query5.next()) {
      course_id= query5.value(0).toString();
      current_week = query5.value(1).toString();
      homework1 = query5.value(2).toString();
      homework2 = query5.value(3).toString();
      homework3 = query5.value(4).toString();

      QTableWidgetItem *item_id = new QTableWidgetItem;
      QTableWidgetItem *item_week = new QTableWidgetItem;
      QTableWidgetItem *item_hw1 = new QTableWidgetItem;
      QTableWidgetItem *item_hw2 = new QTableWidgetItem;
      QTableWidgetItem *item_hw3 = new QTableWidgetItem;

      //创建特定变量用来给表格赋值
      item_id->setText(course_id);
      item_week->setText(current_week);
      item_hw1->setText(homework1);
      item_hw2->setText(homework2);
      item_hw3->setText(homework3);

      //建立表格，用上述变量填充表格
      p_tabledetail = ui->tableWidget;
      p_tabledetail->insertRow(row4); // 插入一行
      p_tabledetail->setItem(row4 , 0 , item_id);
      p_tabledetail->setItem(row4 , 1 , item_week);
      p_tabledetail->setItem(row4 , 2 , item_hw1);
      p_tabledetail->setItem(row4 , 3 , item_hw2);
      p_tabledetail->setItem(row4 , 4 , item_hw3);

      row4++;
      }
  }
  else
  {
      qDebug() << query5.lastError().text();
  }
//从添加界面返回
}

//返回teacher
void hwdetail::on_pushButton_clicked()
{
    this->hide();
    teacher_show();
}

//从addhw,updatehw返回hwdetail
void hwdetail::hwdetail_open()
{
  this->show();
}

//删除信息
void hwdetail::on_pushButton_4_clicked()
{

    QString deletehw = QString("DELETE FROM detail_hw WHERE courseID = '%2' ").arg(storeID);

    QSqlQuery query_delete(deletehw);
    query_delete.prepare(deletehw);

   //显示操作结果
    bool ok = query_delete.exec();
    if (!ok)
    {
        qDebug() << "homework detail" << query_delete.lastError().text();
        QMessageBox::information(this, "提示:失败",query_delete.lastError().text(), QMessageBox::Ok);
    }
    if(ok)
    {
     QMessageBox::information(this, "提示", "删除本周作业内容成功", QMessageBox::Ok);
    }
}

//添加作业信息,信号
void hwdetail::on_pushButton_2_clicked()
{
    p_addhw->addinfo(storeID);
    this->hide();
    p_addhw->show();
}

//刷新作业信息,信号
void hwdetail::on_pushButton_5_clicked()
{
    p_tabledetail->clearContents();

    //从新获取时间
    QDate current_date = p_time->currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
    week = (current_day_of_year - init_day_of_year)/7 + 1;
    //从新建表
    QString select_detail_refresh = QString("select * from detail_hw where courseID = '%1' and week = %2").arg(storeID).arg(week);
    QSqlQuery query_refresh(select_detail_refresh);
    query_refresh.exec();
    query_refresh.first();

    if (query_refresh.exec())
    {
    while (query_refresh.next()) {
        course_id= query_refresh.value(0).toString();
        current_week = query_refresh.value(1).toString();
        homework1 = query_refresh.value(2).toString();
        homework2 = query_refresh.value(3).toString();
        homework3 = query_refresh.value(4).toString();

        qDebug() << course_id << current_week << homework1;

        QTableWidgetItem *item_id = new QTableWidgetItem;
        QTableWidgetItem *item_week = new QTableWidgetItem;
        QTableWidgetItem *item_hw1 = new QTableWidgetItem;
        QTableWidgetItem *item_hw2 = new QTableWidgetItem;
        QTableWidgetItem *item_hw3 = new QTableWidgetItem;

        //创建特定变量用来给表格赋值
        item_id->setText(course_id);
        item_week->setText(current_week);
        item_hw1->setText(homework1);
        item_hw2->setText(homework2);
        item_hw3->setText(homework3);

        //建立表格，用上述变量填充表格
        p_tabledetail = ui->tableWidget;
        p_tabledetail->insertRow(row5); // 插入一行
        p_tabledetail->setItem(row5 , 0 , item_id);
        p_tabledetail->setItem(row5 , 1 , item_week);
        p_tabledetail->setItem(row5 , 2 , item_hw1);
        p_tabledetail->setItem(row5 , 3 , item_hw2);
        p_tabledetail->setItem(row5 , 4 , item_hw3);

        row5++;
        }
    }
}

//修改作业信息，信号
void hwdetail::on_pushButton_3_clicked()
{
    p_updatehw->updateinfo(storeID);
    this->hide();
    p_updatehw->show();
}
