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
