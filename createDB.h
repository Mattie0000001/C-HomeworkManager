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
#include <QSqlQuery>

class CreateDb
{
public:
    CreateDb(); // 构造函数

    void initDB(); // 初始化数据库

    QList<QStringList> selectDataFromBase(QString); // 从数据库的指定表里选择数据

private:
    QString hostName; // 主机名
    QString dbName; // 数据库名
    QString userName; // 数据库用户名
    QString password; // 数据库密码
    QSqlDatabase db; // 数据库
};

#endif // CREATEDB_H

