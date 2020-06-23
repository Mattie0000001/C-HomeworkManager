/***************************
 * 添加账户界面              *
 * 向数据库添加学生账户       *
 * ************************/
#ifndef ADDSTU_H
#define ADDSTUH

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

#include "ui_addstu.h"

namespace Ui {
class AddStu;
}

class AddStu : public QWidget
{
    Q_OBJECT

public:
    explicit AddStu(QWidget *parent = nullptr);
    ~AddStu();

private slots:
    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::AddStu *ui;

    QString name;
    QString id;
    QString password;
    QString calc_id;
    QString prob_id;
    QString draw_id;
    QString phy_id;
    QString circ_id;
    int week;

    void get_info();

signals:
    void thisclose();
};

#endif // ADDSTU_H
