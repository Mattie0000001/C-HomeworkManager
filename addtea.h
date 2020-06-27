/***************************
 * 添加教师账户类
 * 父类：QWidget
 * 创建教师账户并同步数据库
 * *************************/
#ifndef ADDTEA_H
#define ADDTEA_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

#include "ui_addtea.h"

namespace Ui {
class AddTea;
}

// 父类： QWidget
class AddTea : public QWidget
{
// 宏：qobject
    Q_OBJECT

public:
// 构造函数、析构函数
    explicit AddTea(QWidget *parent = nullptr);
    ~AddTea();

private:
// 属性
    // ui
    Ui::AddTea *ui;

    // 教师信息
    QString name;       // 教师姓名
    QString id;         // 教师id（作为账号)
    QString password;   // 教师密码
    QString courseID;   // 教师课程id

// 成员函数
    void get_info();    // 获得文本框输入信息

signals:
    // 信号：关闭此窗口发出
    void thisclose();

private slots:
    // 槽函数
    // finish 按钮点击槽函数 -- 保存入数据库、关闭窗口
    void on_OK_clicked();

    // cancel 按钮点击槽函数 -- 关闭窗口
    void on_Cancel_clicked();
};

#endif // ADDTEA_H
