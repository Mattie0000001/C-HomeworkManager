#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QString>
#include <QSqlDriver>
#include <QMessageBox>

#include "createDB.h"

CreateDb::CreateDb()
{
}

void CreateDb::connectDB() // 连接数据库
{
    // 连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); // 数据库连接
    hostName = "localhost";   // 主机名
    userName = "root";   // 用户名
    password = "123456";   // 密码
    dbName = "hwmanager"; // 数据库名

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

QString CreateDb::select_data(QString table, QString limit_info)
{
    // 查询准备
    QSqlQuery query(db);
    QString select_info = QString("SELECT * FROM %1 WHERE %2").arg(table, limit_info);
    qDebug() << "select_info" << select_info;
    query.prepare(select_info);
    bool ok = query.exec();

    if (ok) {
        // 查询执行
        QSqlRecord rec = query.record(); // rec即查询结果
        int rec_index = rec.indexOf("password"); //rec在第几行
        QString rec_value = query.value(rec_index).toString();

        qDebug() << "rec" << rec;
        qDebug() << "rec_index" << rec_index;
        qDebug() << "rec_value" << rec_value;

        return rec_value;
    } else {
       // 查询失败
       qDebug() << "失败";

       return 0;
    }
}

QList<QStringList> CreateDb::select_all(QString sometable) {  // 从数据库某表读取全部数据
    QString queryString = QString("SELECT * FROM %1").arg(sometable);
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
