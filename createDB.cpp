#include "createDB.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QSqlDriver>

CreateDb::CreateDb()
{
}

void CreateDb::initDB() // 连接数据库
{
    // 连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); // 数据库连接
    hostName = "localhost";   // 主机名
    userName = "root";   // 用户名
    password = "123456";   // 密码
    dbName = "hwManager"; // 数据库名

    qDebug() << QSqlDatabase::drivers();

    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(dbName);

    if (db.open()) {
        qDebug() << "DB IS OPEN";
    } else {
        qDebug() << "NOT OPEN :(" << db.lastError().text();
    }
}

QList<QStringList> CreateDb::selectDataFromBase(QString sometable) {  // 从数据库某表读取全部数据
    QString queryString = QString("SELECT * FROM 1%").arg(sometable);
    QSqlQuery query(queryString);

    QList<QStringList> stuInfo;

    while (query.next())
    {
        QStringList rowData ;

        rowData <<query.value(1).toString();
        rowData <<query.value(2).toString();
        rowData <<query.value(3).toString();
        rowData <<query.value(4).toString();

        stuInfo.append(rowData);
    }
    return stuInfo;
}
