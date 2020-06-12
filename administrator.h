/* *******************************************************
 * 管理员界面                                              *
 * 主要负责管理同学和老师的账号信息， 以及添加、删除学生老师账户   *
 * *******************************************************/
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QWidget>
#include <QVector>
#include <QTableWidget>
#include "addmessage.h"
#include "ui_administrator.h"
#include "createDB.h"

namespace Ui {
class Administrator;
}

class Administrator : public QWidget
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();

    QString getCurrentID(); // 获得当前数据的ID

    void refresh(QString); //刷新数据

    void clearTableData(); // 清楚表格内容

    void appendRowData(QStringList rowData); // 增加一行数据

private:
    Ui::Administrator *ui;

    Administrator *m_pTableWidget;

    CreateDb *m_pCreateDB;

    AddMessage *addmessage;

private slots:
    void on_Add_clicked(); // 添加按钮槽函数

    void on_Delete_clicked(); // 删除按钮槽函数

    void ExecAddSql(QVariantMap); // 向数据库中添加数据

    void ExecDelSql(QString); // 向数据库中删除数据
};

#endif // ADMINISTRATOR_H
