/* ***********************************
 * 数据库相关文件                       *
 * 初始化连接、从数据库表中选择数据        *
 * ********************************* */
#ifndef CREATEDB_H
#define CREATEDB_H

#include <QSql>
#include <QList>
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
    CreateDb(); // 构造函数

    void initDB(); // 连接数据库

    void update_status(); // 判断是否为新的一周，若是，则数据清0

    QString select_data(QString table, QString limit_info); // 从指定表中选择限定范围数据

private:
    QString hostName; // 主机名
    QString dbName; // 数据库名
    QString userName; // 数据库用户名
    QString password; // 数据库密码
    QSqlDatabase db; // 数据库

    QDate p_time;
    const QDate *init_date = new QDate(2020, 2, 24); // 设置学期第一天
    int week = 1;
};

#endif // CREATEDB_H

