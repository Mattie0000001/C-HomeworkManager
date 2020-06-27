/* ***********************************
 * 数据库类
 * 功能： 初始化数据库、每周更新学生作业状态
 * ********************************* */
#ifndef CREATEDB_H
#define CREATEDB_H

#include <QSql>
#include <QDebug>
#include <QString>
#include <QDate>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>

class CreateDb
{
public:
// 构造函数、析构函数
    explicit CreateDb();
    ~CreateDb();

// 成员函数 public
    void initDB(); // 连接数据库

    void update_status(); // 判断是否为新的一周，若是，则学生作业状态数据清0

private:
// 属性
    QString hostName; // 主机名
    QString dbName; // 数据库名
    QString userName; // 数据库用户名
    QString password; // 数据库密码
    QSqlDatabase db; // 数据库

    QDate *p_time;           // 指向一个QDate实例的指针
    QDate current_date;      // QDate实例：当前日期
    const QDate *init_date = new QDate(2020, 2, 24); // QDate常量指针：指向学期第一天
    int week = 1; // 第几周
};

#endif // CREATEDB_H

