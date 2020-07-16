#ifndef STU_H
#define STU_H

#include <QMainWindow>
#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include "ui_stu.h"
#include <QString>
#include "cal.h"
#include "ps.h"
#include "ed.h"
#include "circuit.h"
#include "physics.h"
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRegExp>
#include <QDate>

namespace Ui {
class Stu;
}

class Stu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Stu(QWidget *parent = nullptr);
    ~Stu();

    //初始化函数
    void init(QString);   //打开个人界面 初始化界面
private slots:
    void on_infor_backpushButton_clicked();
//更新保存有关数据
    void on_update_clicked();
 //返回登陆界面
    void on_back_clicked();

    void on_cal_2_clicked();

    void on_PS_3_clicked();

    void on_ED_3_clicked();

    void on_circuit_3_clicked();

    void on_physics_3_clicked();

    void on_cal_3_clicked();

    void on_PS_2_clicked();

    void on_ED_2_clicked();

    void on_circuit_2_clicked();

    void on_physics_2_clicked();


private:
    Ui::Stu *ui;
    Cal *p_cal;
    Ps *p_ps;
    Ed *p_ed;
    Circuit *p_circuit;
    Physics *p_physics;

    QString stuid;

   //用于保存临时数据的量 因为bool不能直接插入，先用int 代替
   int cal;
   int PS;
   int ED;
   int circuit;
   int physics;
   int time1;
   //调用时间相关函数
   QDate *p_time;           // 指向一个QDate实例的指针
   QDate current_date;      // QDate实例：当前日期
   const QDate *init_date = new QDate(2020, 2, 24); // QDate常量指针：指向学期第一天
   int week = 1; // 第几周

   QString course_id;
   QString current_week;
   QString homework1;
   QString homework2;
   QString homework3;

signals:
   void mainwindow_show();

};

#endif // STU_H
