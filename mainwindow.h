/* *****************************************
 * mainwindow即登录界面（顺带注册功能）        *
 * 登录成功后，判断如果到新的一周，作业状态归0    *
 * *****************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "administrator.h"
#include "createDB.h"

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

    void on_Btn_login_clicked(); // 登录

    void on_Radio_student_clicked(); // 选择学生身份

    void on_Radio_teacher_clicked(); // 选择老师身份

    void on_Radio_admin_clicked(); // 选择管理员身份

private:
    void openUI(); // 登录成功，打开对应（老师/学生/admin）界面
private:
    Ui::MainWindow *ui;
    Administrator *p_admin;
    CreateDb *p_database;

    QString ID;
    QString password;
    QString thisuser; // 用户身份（admin/student/teacher）
};

#endif // MAINWINDOW_H
