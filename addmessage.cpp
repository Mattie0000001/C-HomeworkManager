#include "addmessage.h"
#include "ui_addmessage.h"
#include <QCloseEvent>
#include <QVariantMap>

AddMessage::AddMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMessage)
{
    ui->setupUi(this);
}

AddMessage::~AddMessage()
{
    delete ui;
}


void AddMessage::on_OK_clicked()
{
    // 获取输入框的值
    QVariantMap stuInfo;

    QString stuName = ui->stuName->text();
    QString classID = ui->classID->text();
    QString stuID = ui->stuID->text();
    QString password = ui->password->text();

    // 将获取的值构造成variantMap
    stuInfo.insert("stuName", stuName);
    stuInfo.insert("classID" , classID);
    stuInfo.insert("stuID" , stuID);
    stuInfo.insert("password", password);

    // 发送信号
//    emit signalStuInfo(stuInfo);

    // 完成后，add message 弹窗关闭
    this->hide();
}

void AddMessage::on_Cancel_clicked()
{
    this->hide();
}
