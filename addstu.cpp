#include "addstu.h"
#include "ui_addstu.h"

// 构造函数--初始化ui、打开ui
AddStu::AddStu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStu)
{
    ui->setupUi(this);
}

// 析构函数 -- 删除ui
AddStu::~AddStu()
{
    delete ui;
}

// 获得信息
void AddStu::get_info()
{
// 获得文本框输入信息
    name = ui->name->text();
    id = ui->id->text();
    password = ui->password->text();
    calc_id = ui->calc->text();
    circ_id = ui->circ->text();
    prob_id = ui->prob->text();
    draw_id = ui->draw->text();
    phy_id = ui->phy->text();

// 计算第几周
    current_date = p_time->currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
    week = (current_day_of_year - init_day_of_year)/7 + 1;
}

// finish按钮点击-----数据库同步
void AddStu::on_OK_clicked()
{
// 获得数据
    get_info();

// 向student表中插入信息
    // sql插入
    QString add_stu = QString("insert into student values ('%1','%2','%3')").arg(id, name, password);
    QSqlQuery query;
    query.prepare(add_stu);

    bool ok = query.exec();
    // 查询插入、打印失败原因、提示
    if (!ok)
    {
        qDebug() << "student" << query.lastError().text();
        QMessageBox::information(this, "提示", "插入student表失败", QMessageBox::Ok);
    }

// 向homework表中插入信息
    // sql插入
    QString add_hw = QString("insert into homework values ('%1','%2',%3,'%4',0,'%5',0,'%6',0,'%7',0,'%8',0)")
                     .arg(id, name).arg(week).arg(calc_id, prob_id, draw_id, circ_id, phy_id);
    QSqlQuery query2;
    query2.prepare(add_hw);

    bool ok2 = query2.exec();
    // 插入失败、打印原因、提示
    if (!ok2)
    {
        qDebug() << "hw" << query2.lastError().text();
        QMessageBox::information(this, "提示", "插入homework表失败", QMessageBox::Ok);
    }

// 关闭窗口、发送信号
    thisclose();
    this->close();
}

// 关闭窗口
void AddStu::on_Cancel_clicked()
{
    this->close();
}
