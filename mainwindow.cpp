#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 连接数据库
    p_database = new CreateDb;
    p_database->initDB();

    // 默认radio选中admin
    ui->Radio_admin->setChecked(true);
    thisuser = "admin";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Btn_login_clicked()
{
    qDebug() << "登录！";
    if (!(ID.isEmpty() || password.isEmpty())) // id和password字段值不为空
    {
        // 获得id和密码
        ID = ui->Input_ID->text();
        password = ui->Input_password->text();

        // 查询数据库
        QSqlQuery query;
        QString checkExist = QString("SELECT password FROM 1% WHERE id=2%")
            .arg(thisuser).arg(ID);
        query.prepare(checkExist);
        bool ok = query.exec();
        if (ok) {
            QSqlRecord rec = query.record(); // rec即查询结果
            int rec_index = rec.indexOf("password"); //rec在第几行
            QString rec_value = query.value(rec_index).toString();
            if (rec_value == password) {
                // 匹配，登录成功
                openUI();
            } else {
                QMessageBox::information(this, "提示", "密码错误！", QMessageBox::Ok);
            }
        } else {
           QMessageBox::information(this, "提示", "登录失败", QMessageBox::Ok);
        }
    }

}

void MainWindow::openUI () {
    if (thisuser == "admin") {
        this->close();
        p_admin->show();
    } else if (thisuser == "student") {
        this->close();
        // student 弹出
    } else {
        this->close();
        // teacher 弹出
    }
}

// radio选中相应给thisuser赋值
void MainWindow::on_Radio_student_clicked()
{
    thisuser = "student";
}

void MainWindow::on_Radio_teacher_clicked()
{
    thisuser = "teacher";
}

void MainWindow::on_Radio_admin_clicked()
{
    thisuser = "admin";
}
