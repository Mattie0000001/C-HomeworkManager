#include "addtea.h"
#include "ui_addtea.h"

// 构造函数--初始化ui、打开ui
AddTea::AddTea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTea)
{
    ui->setupUi(this);
}

// 析构函数 -- 删除ui
AddTea::~AddTea()
{
    delete ui;
}

// 获得信息
void AddTea::get_info()
{
// 获得文本框输入信息
    name = ui->name->text();
    id = ui->id->text();
    password = ui->password->text();
    courseID = ui->courseID->text();
}

// finish按钮点击-----数据库同步
void AddTea::on_OK_clicked()
{
// 获得数据
    get_info();

// 向teacher表中插入信息
    // sql插入
    QString add_tea = QString("insert into teacher values ('%1','%2','%3', '%4')")
                      .arg(id, name, password, courseID);
    QSqlQuery query;
    query.prepare(add_tea);

    // 查询插入、打印失败原因、提示
    bool ok = query.exec();
    if (!ok)
    {
        qDebug() << "teacher" << query.lastError().text();
        QMessageBox::information(this, "提示", "插入teacher表失败", QMessageBox::Ok);
    }

// 关闭窗口、发送信号
    thisclose();
    this->close();
}

// 关闭窗口
void AddTea::on_Cancel_clicked()
{
    this->close();
}
