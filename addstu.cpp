#include <QCloseEvent>
#include <QVariantMap>

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
