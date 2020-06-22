/* ***********************************
 * 数据库相关文件                       *
 * 初始化连接、从数据库表中选择数据        *
 * ********************************* */
#ifndef CREATEDB_H
#define CREATEDB_H

#include <QSql>
#include <QList>
#include <QStringList>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlQuery>

class CreateDb
{
public:
    CreateDb(); // 构造函数

    void connectDB(); // 连接数据库

    QString select_data(QString table, QString limit_info); // 从指定表中选择限定范围数据

    QList<QStringList> select_all(QString table); // 从指定表里选择全部数据

private:
    QString hostName; // 主机名
    QString dbName; // 数据库名
    QString userName; // 数据库用户名
    QString password; // 数据库密码
    QSqlDatabase db; // 数据库
};

#endif // CREATEDB_H

