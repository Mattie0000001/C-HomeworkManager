#include "createDB.h"

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
    dbName = "hwmanager"; // 数据库名

    qDebug() << QSqlDatabase::drivers();

    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(dbName);

    if (db.open())
    {
        qDebug() << "DB IS OPEN";
    } else
    {
        qDebug() << "NOT OPEN :(" << db.lastError().text();
    }

    // 读取系统时间，判断周数，若到新的一周，则清零
    update_status();

}

void CreateDb::update_status()
{
    QDate current_date = p_time.currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天

    week = (current_day_of_year - init_day_of_year)/7 + 1;

    qDebug() << "current date" << current_date;
    qDebug() << "week" << week;

    // 从数据库调用week
    QSqlQuery query("select week from homework");

    // 清0or不清0
    if (query.exec())
    {
        query.first();
        int old_week = query.value(0).toInt();
        qDebug() << "old_week" << old_week;

        // 如果是新的一周
        if (old_week < week)
        {
            // 作业status全部清0,并且更新week的值
            QString update_sql = QString("update homework "
                                     "set calc_status = 0, prob_status = 0, circ_status = 0, "
                                     "draw_status = 0, physics_status = 0, week = %1")
                                     .arg(week);
            QSqlQuery query_update(update_sql);

            if (!query_update.exec())
            {
                qDebug() << "error update status" << query.lastError().text();
            }
        }
    }
    else
    {
        qDebug() << "error select" << query.lastError().text();
    }
}
