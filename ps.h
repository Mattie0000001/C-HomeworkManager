#ifndef PS_H
#define PS_H

#include <QWidget>
#include <QMessageBox>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRegExp>
#include <QDate>

namespace Ui {
class Ps;
}

class Ps : public QWidget
{
    Q_OBJECT

public:
    explicit Ps(QWidget *parent = nullptr);
    ~Ps();

        void init(QString);
private:
    Ui::Ps *ui;

    //调用时间相关函数
    QDate *p_time;           // 指向一个QDate实例的指针
    QDate current_date;      // QDate实例：当前日期
    const QDate *init_date = new QDate(2020, 2, 24); // QDate常量指针：指向学期第一天
    int week = 1; // 第几周

    //建表相关
    int row4=0,row5=0;
    QString storeID;//用于在类里面各函数之间传递
    QString course_id;
    QString current_week;
    QString homework1;
    QString homework2;
    QString homework3;

    QTableWidget * p_tabledetail;
};

#endif // PS_H
