#include "addstu.h"
#include "ui_addstu.h"

AddStu::AddStu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStu)
{
    ui->setupUi(this);
}

AddStu::~AddStu()
{
    delete ui;
}

void AddStu::get_info()
{
    name = ui->name->text();
    id = ui->id->text();
    password = ui->password->text();
    calc_id = ui->calc->text();
    circ_id = ui->circ->text();
    prob_id = ui->prob->text();
    draw_id = ui->draw->text();
    phy_id = ui->phy->text();

    week = 1;
    // 等会加一个查询
}

void AddStu::on_OK_clicked()
{
    get_info();
    // 向student表中插入信息
    QString add_stu = QString("insert into student values ('%1','%2','%3')").arg(id, name, password);
    QSqlQuery query;
    query.prepare(add_stu);
    bool ok = query.exec();
    if (!ok) {
        qDebug() << "student" << query.lastError().text();
    }

    // 向homework表中插入信息
    QString add_hw = QString("insert into homework values ('%1','%2',%3,'%4',0,'%5',0,'%6',0,'%7',0,'%8',0)")
                     .arg(id, name).arg(week).arg(calc_id, prob_id, draw_id, circ_id, phy_id);
    QSqlQuery query2;
    query2.prepare(add_hw);
    bool ok2 = query2.exec();
    if (!ok2) {
        qDebug() << "hw" << query2.lastError().text();
        QMessageBox::information(this, "提示", "插入失败", QMessageBox::Ok);
    }

    thisclose();
    this->close();
}

void AddStu::on_Cancel_clicked()
{
    this->close();
}
