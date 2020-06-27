/* ****************************
 * 登录类
 * 父类：QMainWindow
 * 功能：登录、成功后跳转至指定界面
 * ****************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDebug>

#include "createDB.h"
#include "ui_mainwindow.h"
#include "administrator.h"
#include "stu.h"

namespace Ui {
class MainWindow;
}

// 父类：QMainwindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
// 构造函数、析构函数
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
// 属性
    // 指向ui
    Ui::MainWindow *ui;

    // 其他类实例
    Administrator *p_admin; // 指向管理员窗口
    CreateDb *p_database;   // 指向数据库
    Stu *p_stu;             // 指向学生窗口

    // 登录所需数据
    QString ID;       // 用户输入的id
    QString password; // 用户输入的密码
    QString thisuser; // 用户身份（"admin"/"student"/"teacher"）

    void openUI(); // 登录成功，打开对应（老师/学生/admin）界面

private slots:
// 成员函数--槽函数
    void open_mainwindow(); // 重新打开此界面

    void on_Btn_login_clicked(); // 登录按钮点击

    void on_Radio_student_clicked(); // 选择学生身份

    void on_Radio_teacher_clicked(); // 选择老师身份

    void on_Radio_admin_clicked(); // 选择管理员身份

};

#endif // MAINWINDOW_H
