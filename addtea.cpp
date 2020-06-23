#include "addtea.h"
#include "ui_addtea.h"

AddTea::AddTea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTea)
{
    ui->setupUi(this);
}

AddTea::~AddTea()
{
    delete ui;
}

void AddTea::get_info()
{
    name = ui->name->text();
    id = ui->id->text();
    password = ui->password->text();
    courseID = ui->courseID->text();
}

void AddTea::on_OK_clicked()
{
    get_info();
    // 向teacher表中插入信息
    QString add_tea = QString("insert into teacher values ('%1','%2','%3', '%4')")
                      .arg(id, name, password, courseID);
    QSqlQuery query;
    query.prepare(add_tea);
    bool ok = query.exec();
    if (!ok) {
        qDebug() << "teacher" << query.lastError().text();
    }

    thisclose();
    this->close();
}

void AddTea::on_Cancel_clicked()
{
    this->close();
}
