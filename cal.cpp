#include "cal.h"
#include "ui_cal.h"
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include  <time.h>
#include <QDateTime>
#include <QWidget>


Cal::Cal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cal)
{
    ui->setupUi(this);

}

Cal::~Cal()
{
    delete ui;
}


void Cal::init(QString ID="calc01")
{
  storeID=ID;//用于在本类函数之间传参
  QDate current_date = p_time->currentDate(); // 当前日期
  int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
  int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
  week = (current_day_of_year - init_day_of_year)/7 + 1;
  //获取周数

  QString select_detail = QString("select homework1,homework2,homework3 from detail_hw where courseID = '%1' and week = %2").arg(ID).arg(week);
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
};
