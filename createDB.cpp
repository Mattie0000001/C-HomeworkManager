#include "createDB.h"

CreateDb::CreateDb()
{
}

// 连接数据库、更新学生作业状态
void CreateDb::initDB()
{
// 连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); // 数据库连接
    hostName = "localhost";   // 主机名
    userName = "root";   // 用户名
    password = "123456";   // 密码
    dbName = "hwmanager"; // 数据库名

    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(dbName);

    if (db.open())
    {
        qDebug() << "DB IS OPEN";
    }
    else
    {
        qDebug() << "NOT OPEN :(" << db.lastError().text();
    }

// 读取系统时间，判断周数，若到新的一周，则清零
    update_status();

}

void CreateDb::update_status()
{
// 获取日期、计算当前第几周
    QDate current_date = p_time->currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
    week = (current_day_of_year - init_day_of_year)/7 + 1;

// 判断是否是新的一周
    // 获取数据库中当前周数
    QSqlQuery query("select week from homework");

    if (query.exec())
    {
        query.first();
        int old_week = query.value(0).toInt();

        // 判断是否为新的一周
        if (old_week < week)
        {
            // 作业status全部清0, 并且更新week的值
            QString update_sql = QString("update homework "
                                     "set calc_status = 0, prob_status = 0, circ_status = 0, "
                                     "draw_status = 0, physics_status = 0, week = %1")
                                     .arg(week);
            QSqlQuery query_update(update_sql);

            // 更新数据库不成功，打印原因
            if (!query_update.exec())
            {
                qDebug() << "error update status" << query.lastError().text();
            }
        }
    }
    // 获取不成功，打印原因
    else
    {
        qDebug() << "error select" << query.lastError().text();
    }

}

int CreateDb::get_week()
{
    QDate current_date = p_time->currentDate(); // 当前日期
    int current_day_of_year = current_date.dayOfYear(); // 今天是今年第几天
    int init_day_of_year = init_date->dayOfYear(); // 初始日期是今年第几天
    week = (current_day_of_year - init_day_of_year)/7 + 1;
    return week;
}

