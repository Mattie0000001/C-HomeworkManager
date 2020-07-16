#ifndef UPDATEHW_H
#define UPDATEHW_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QRegExp>
#include <QDate>

#include "ui_updatehw.h"
namespace Ui {
  class updatehw;
}

class updatehw : public QWidget
{
  Q_OBJECT

public:
  explicit updatehw(QWidget *parent = nullptr);
  ~updatehw();

  //联系hwdetail的接口
  void updateinfo(QString id_course);

 signals:
  void hwdetail_show();


private slots:
  void on_pushButton_clicked();//返回上一页

  void on_pushButton_2_clicked();//保存更新

private:
  Ui::updatehw *ui;
  QString uphw1;
  QString uphw2;
  QString uphw3;
  QString courseID;
  int c_week=0;

  void get_update();//获得文本框输入信息

};

#endif // UPDATEHW_H
