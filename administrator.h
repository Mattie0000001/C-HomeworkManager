/* *************************************
 * 管理员类
 * 父类：QWidget
 * 功能：管理学生/教师账户，即添加和删除账户
 * 可刷新、添加、删除
 * **************************************/
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTabWidget>
#include <QSqlQuery>
#include <QSqlError>

#include "addstu.h"
#include "addtea.h"
#include "ui_administrator.h"
#include "createDB.h"

namespace Ui {
class Administrator;
}

// 父类：QWidget
class Administrator : public QWidget
{
    Q_OBJECT

public:
// 构造函数、析构函数
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();

private:
// 属性
    // 指针 指向ui
    Ui::Administrator *ui;

    // 其他类的实例
    CreateDb *p_database; // 指向 数据库类
    AddStu *p_addstu;     // 指向 addstu类
    AddTea *p_addtea;     // 指向 addtea类

    QTableWidget *p_table; // 指向 tableWidget类
    QTabWidget *p_tab;     // 指向 tabWidget类

// 成员函数
private slots:
    // 槽函数
    // 数据库有关
    void delete_account(QString); // 删除账户信息

    void refresh(); // 刷新表格数据

    // 按钮槽函数
    void on_tea_add_clicked(); // 教师界面 add 按钮槽函数 -- 弹出addtea窗口

    void on_tea_delete_clicked(); // 教师界面 delete 按钮槽函数 -- 删除选中账户

    void on_tea_refresh_clicked(); // 教师界面 refresh 按钮槽函数 -- 刷新

    void on_stu_add_clicked(); // 教师界面 add 按钮槽函数 -- 弹出addtea窗口

    void on_stu_delete_clicked(); // 教师界面 delete 按钮槽函数 -- 删除选中账户

    void on_stu_refresh_clicked(); // 教师界面 refresh 按钮槽函数 -- 刷新

    void on_stu_back_clicked(); // 教师界面 back 按钮槽函数 -- 返回登录界面

// 信号
signals:
    void mainwindow_show();
};
#endif // ADMINISTRATOR_H
