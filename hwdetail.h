#ifndef HWDETAIL_H
#define HWDETAIL_H

#include <QWidget>
#include "addhw.h"
#include "updatehw.h"
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRegExp>
#include <QDate>
namespace Ui {
  class hwdetail;
}

class hwdetail : public QWidget
{
  Q_OBJECT

public:
  explicit hwdetail(QWidget *parent = nullptr);
  ~hwdetail();
  void show_hwdetail(QString ID);



private slots:
  //注释在hwdetail.cpp
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_pushButton_5_clicked();

  void on_pushButton_4_clicked();

  //从addhw回到hwdetail（this）
  void hwdetail_open();

  void on_pushButton_3_clicked();

signals:
  //从新打开teacher界面
   void teacher_show();


private:
  Ui::hwdetail *ui;
  addhw * p_addhw;
  updatehw *p_updatehw;

  //调用时间相关函数
  QDate *p_time;           // 指向一个QDate实例的指针
  QDate current_date;      // QDate实例：当前日期
  const QDate *init_date = new QDate(2020, 2, 24); // QDate常量指针：指向学期第一天
  int week = 1; // 第几周

  //建表相关
  int row4=0,row5=0;
  QString storeID;//用于在类里面各函数之间传递
  QString course_id;
  QString current_week;
  QString homework1;
  QString homework2;
  QString homework3;

  QTableWidget * p_tabledetail;
};
#endif // HWDETAIL_H

