#include "stu.h"
#include "ui_stu.h"
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include  <time.h>
#include <QDateTime>


Stu::Stu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Stu)
{
    ui->setupUi(this);
}

Stu::~Stu()
{
    delete ui;
}


void Stu::init(QString id)//需要
{
    // 姓名
    stuid = id;
    QString info = QString("id = %1").arg(id);
    QString select_sql = QString("select * from %1 where %2").arg("student", info);
    QSqlQuery query1(select_sql);

    query1.first();
    QString name = query1.value(1).toString();
    ui->name->setText(name);//将登陆界面显示的姓名显示在文本框内

    //查询
    QString select_sql2 = QString("select * from %1 where %2").arg("homework", info);
    QSqlQuery query(select_sql2);

    //缓存各科目得状态
    while (query.next())
    {
        cal=query.value(4).toInt();
        PS=query.value(6).toInt();
        ED=query.value(8).toInt();
        circuit=query.value(10).toInt();
        physics=query.value(12).toInt();
    }

     //根据状态显示有关数据
    if (cal==2)
    {
        ui->cal_2->setChecked(true);
    }
    else
    {
        ui->cal_2->setChecked(false);
    }

    if (PS==2)
    {
        ui->PS_3->setChecked(true);
    }
    else
    {
        ui->PS_3->setChecked(false);
    }
    if (ED==2)
    {
        ui->ED_3->setChecked(true);
    }
    else
    {
        ui->ED_3->setChecked(false);
    }

    if (circuit==2)
    {
        ui->circuit_3->setChecked(true);
    }
    else
    {
        ui->circuit_3->setChecked(false);
    }

    if (physics==2)
    {
        ui->physics_3->setChecked(true);
    }
    else
    {
        ui->physics_3->setChecked(false);
    }
}


void Stu::on_infor_backpushButton_clicked()
{
    this->close();
    mainwindow_show();
}

void Stu::on_update_clicked()
{
    QString sql;//和表格名相同
    sql = QString("UPDATE homework "
                  "set calc_status= %1, prob_status=%2,draw_status=%3,circ_status=%4,physics_status=%5"
                  " where id = %7")
                  .arg(cal).arg(PS).arg(ED).arg(circuit).arg(physics).arg(stuid);
    QSqlQuery query;
    bool ok = query.exec(sql);
    if(ok)
    {
         QMessageBox::information(this ,tr("提示") , tr("保存成功!"));
    }
    else
    {
         QMessageBox::information(this ,tr("提示") , tr("保存失败!"));
         qDebug() << "error" << query.lastError().text();
    }
}

void Stu::on_back_clicked()
{
    this->close();
    mainwindow_show();
}

void Stu::on_cal_2_clicked()
{
    if (ui->cal_2->isChecked())
    {
        cal=2;
    }
    else
    {
        cal=0;
    }
}

void Stu::on_PS_3_clicked()
{
    if (ui->PS_3->isChecked())
    {
        PS=2;
    }
    else
    {
        PS=0;
    }
}

void Stu::on_ED_3_clicked()
{
    if (ui->ED_3->isChecked())
    {
       ED=2;
    }
    else
    {
        ED=0;
    }
}

void Stu::on_circuit_3_clicked()
{
    if (ui->circuit_3->isChecked())
    {
        circuit=2;
    }
    else
    {
        circuit=0;
    }
}

void Stu::on_physics_3_clicked()
{
    if (ui->physics_3->isChecked())
    {
        physics=2;
    }
    else
    {
        physics=0;
    }
}
