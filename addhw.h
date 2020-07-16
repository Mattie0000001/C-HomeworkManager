#ifndef ADDHW_H
#define ADDHW_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QRegExp>
#include <QDate>

#include "ui_addhw.h"

namespace Ui {
  class addhw;
}

class addhw : public QWidget
{
  Q_OBJECT

public:
  explicit addhw(QWidget *parent = nullptr);
  ~addhw();

   void addinfo(QString id_course);//联系hwdetail的接口

private:
  Ui::addhw *ui;
  QString hw1;
  QString hw2;
  QString hw3;
  QString courseID;
  int c_week=0;
  QDate *p_time;
  const QDate *init_date;

  void get_input();//获得文本框输入信息


signals:
  void hwdetail_show();

private slots:
  void on_pushButton_clicked();//确认添加
  void on_pushButton_2_clicked();//返回上一页
};

#endif // ADDHW_H
