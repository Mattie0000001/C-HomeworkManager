#include "addhw.h"
#include "ui_addhw.h"

addhw::addhw(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::addhw)
{
  ui->setupUi(this);
}

addhw::~addhw()
{
  delete ui;
}

void addhw::get_input()
{
// 获得文本框输入信息
    hw1 = ui->addhw1->toPlainText();
    hw2 = ui->addhw2->toPlainText();
    hw3 = ui->addhw3->toPlainText();
}

//打开添加页面+传参courseID
void addhw::addinfo(QString id_course)
{
  this->show();
  courseID=id_course;
}

//确认添加信息
void addhw::on_pushButton_clicked()
{
    get_input();
    //获取当前时间
    p_time = new QDate;
    const QDate *init_date=  new QDate(2020, 2, 24);
    QDate current_date = p_time->currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
    c_week = (current_day_of_year - init_day_of_year)/7 + 1;

    QString append_hw = QString("INSERT INTO detail_hw (courseID,week,homework1,homework2,homework3) VALUE('%1',%2,'%3','%4','%5') ")
                      .arg(courseID).arg(c_week).arg(hw1).arg(hw2).arg(hw3);
    //courseID在本函数中只出现了这一次，但其在上一个函数中已经被赋值了

    QSqlQuery query6;
    query6.prepare(append_hw);

    //debug:
    bool ok = query6.exec();
    if (!ok)
    {
        qDebug() << "addhomework" << query6.lastError().text();
        QMessageBox::information(this, "提示",query6.lastError().text(), QMessageBox::Ok);
    }
    if (ok)
    {
        qDebug() << "addhomework" << "添加成功";
        QMessageBox::information(this, "提示","添加作业内容成功", QMessageBox::Ok);
    }

    this->hide();
    hwdetail_show();
}

//返回上一页
void addhw::on_pushButton_2_clicked()
{
    this->hide();
    hwdetail_show();
}
