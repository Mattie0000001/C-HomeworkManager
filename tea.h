#ifndef TEA_H
#define TEA_H

#include <QWidget>
#include "ui_tea.h"
#include "hwdetail.h"
#include "createDB.h"
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRegExp>

namespace Ui {
  class tea;
}

class hwdetail;
//先声明一下hwdetail，否则编译会乱
class tea : public QWidget
{
  Q_OBJECT

public:
  explicit tea(QWidget *parent = nullptr);
  ~tea();
  void init2(QString id);
  void count(QString);

private slots:
  void on_pushButton_clicked();//返回

  void on_pushButton_2_clicked();//刷新

  void on_pushButton_3_clicked();

  void teacher_open();

  void slots_opendetail();

signals:
  void mainwindow_show();
  void tea_refresh();
  void signal_opendetail();


private:
  Ui::tea *ui;
  QString id;
  QString teaid;
  QString courseID;
  QString teaID;
  QString teaName;
  QTableWidget *P_tabStu;
  QString select_sql3;
  QString select_sql2;
  QString select_sql;
  QString stuid;
  QString stuname;
  QString week;
  QString subjects;
  QString status;
  QTableWidget * p_tablestu;
  QTableWidget * p_tablestu2;
  int row2=0,row3=0;

  hwdetail *p_detail;


};

#endif // TEA_H
