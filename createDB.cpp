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
    QString select_sql = QString("select * from %1 where %2").arg(table, limit_info);
    QSqlQuery query(select_sql);

    // 查询执行
    query.first();
    QSqlRecord rec = query.record(); // rec即查询结果
    int rec_index = rec.indexOf("password"); //rec在第几列
    QString rec_value = query.value(rec_index).toString();
    return rec_value;
}
