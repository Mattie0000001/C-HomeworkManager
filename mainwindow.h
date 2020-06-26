/* *****************************************
 * mainwindow即登录界面（顺带注册功能）        *
 * 登录成功后，判断如果到新的一周，作业状态归0    *
 * *****************************************/
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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void open_mainwindow(); // 重新打开

    void on_Btn_login_clicked(); // 登录

    void on_Radio_student_clicked(); // 选择学生身份

    void on_Radio_teacher_clicked(); // 选择老师身份

    void on_Radio_admin_clicked(); // 选择管理员身份

private:
    Ui::MainWindow *ui;
    Administrator *p_admin;
    CreateDb *p_database;
    Stu *p_stu;

    QString ID;
    QString password;
    QString thisuser; // 用户身份（"admin"/"student"/"teacher"）

    void openUI(); // 登录成功，打开对应（老师/学生/admin）界面
};

#endif // MAINWINDOW_H
