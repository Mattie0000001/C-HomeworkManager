/***************************
 * 添加账户界面              *
 * 向数据库添加老师账户       *
 * ************************/
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

class AddTea : public QWidget
{
    Q_OBJECT

public:
    explicit AddTea(QWidget *parent = nullptr);
    ~AddTea();

private:
    Ui::AddTea *ui;

    QString name;
    QString id;
    QString password;
    QString courseID;

    void get_info();

signals:
    void thisclose();
private slots:
    void on_OK_clicked();
    void on_Cancel_clicked();
};

#endif // ADDTEA_H
