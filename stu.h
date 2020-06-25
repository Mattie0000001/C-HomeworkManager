#ifndef STU_H
#define STU_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include "ui_stu.h"
#include <QString>

namespace Ui {
class Stu;
}

class Stu : public QWidget
{
    Q_OBJECT

public:
    explicit Stu(QWidget *parent = nullptr);
    ~Stu();

    //初始化函数
    void init(QString);   //打开个人界面  改成 初始化界面
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

private:
    Ui::Stu *ui;

    QString stuid;

   //用于保存临时数据的量 因为bool不能直接插入，先用int 代替
   int cal;
   int PS;
   int ED;
   int circuit;
   int physics;
   int time1;

signals:
   void mainwindow_show();
};

#endif // STU_H


