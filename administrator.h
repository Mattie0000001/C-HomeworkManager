/* *******************************************************
 * 管理员界面                                              *
 * 主要负责管理同学和老师的账号信息， 以及添加、删除学生老师账户   *
 * *******************************************************/
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <Qt>
#include <QFlags>
#include <QPushButton>
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

class Administrator : public QWidget
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();

private:
    Ui::Administrator *ui;

    CreateDb *p_database;
    AddStu *p_addstu;
    AddTea *p_addtea;

    QTableWidget *p_table;
    QTabWidget *p_tab;

private slots:
    // 数据库有关
    void delete_account(QString); // 删除账户信息
    void refresh(); // 刷新表格数据

    // 按钮槽函数
    void on_tea_add_clicked();
    void on_tea_delete_clicked();
    void on_tea_refresh_clicked();

    void on_stu_add_clicked();
    void on_stu_delete_clicked();
    void on_stu_refresh_clicked();

signals:
    void mainwindow_show();
};

#endif // ADMINISTRATOR_H
