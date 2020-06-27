/***********************************
 * 添加学生账户类
 * 父类： QWidget
 * 功能：创建学生账户，并同步在数据库中
 * *********************************/
#ifndef ADDSTU_H
#define ADDSTUH

#include <QWidget>
#include <QDebug>
#include <QDate>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

#include "ui_addstu.h"

namespace Ui {
class AddStu;
}

// 父类：QWidget
class AddStu : public QWidget
{
// 宏：qobject
    Q_OBJECT

public:
// 构造函数、析构函数
    explicit AddStu(QWidget *parent = nullptr);
    ~AddStu();

private:
// 属性（成员变量）
    // ui
    Ui::AddStu *ui;

    // 学生信息
    QString name;           // 学生姓名
    QString id;             // 学生id（作为账号）
    QString password;       // 学生密码
    QString calc_id;        // 此学生 微积分课程id
    QString prob_id;        // 此学生 概率论课程id
    QString draw_id;        // 此学生 工程制图课程id
    QString phy_id;         // 此学生 物理课程id
    QString circ_id;        // 此学生 电路课程id

    QDate *p_time;           // 指向一个QDate实例的指针
    QDate current_date;      // QDate实例：当前日期
    const QDate *init_date = new QDate(2020, 2, 24); // QDate常量指针：指向学期第一天
    int week = 1; // 第几周

// 成员函数
    void get_info(); // 获得输入框得到的信息

private slots:
     // 槽函数
    // finish按钮点击槽函数 -- 保存入数据库、关闭窗口
    void on_OK_clicked();

    // cancel按钮点击槽函数 -- 关闭窗口
    void on_Cancel_clicked();

signals:
    // 信号：关闭此窗口时发出
    void thisclose();
};

#endif // ADDSTU_H
