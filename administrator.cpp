#include <QTableWidget>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlQuery>

#include "administrator.h"
#include "ui_administrator.h"

Administrator::Administrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
    refresh("teacher");
    refresh("student");
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::delete_account(QString tab)
{
    // 当前行数
    int row_index = tab == "student" ? ui->table_stu->currentRow() : ui->table_tea->currentRow();
    if (row_index != -1) {
        // 数据库删除
        QString id = ui->table_stu->item(row_index, 0)->text();
        QString deleteSql = QString("delete from %1 where id = %2").arg(tab, id);
        QSqlQuery query(deleteSql);
        // ui删除 (即刷新表格，重新渲染数据)
        refresh(tab);
    } else {
        QMessageBox::information(this, "提示", "请选中数据！", QMessageBox::Ok);
    }
}

void Administrator::refresh(QString tab)
{
    QTableWidget *p_table = tab == "student" ? ui->table_stu : ui->table_tea;
    // 清空当前所有数据
    p_table->clearContents();

    // 重新从数据库渲染数据
    QString sql = QString("select * from %1").arg(tab);
    QSqlQuery query(sql);

    int row = 0;
    while (query.next()) {
        QString id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString password = query.value(2).toString();

        QTableWidgetItem *item_id = new QTableWidgetItem;
        QTableWidgetItem *item_name = new QTableWidgetItem;
        QTableWidgetItem *item_password = new QTableWidgetItem;

        item_id->setText(id);
        item_name->setText(name);
        item_password->setText(password);

        p_table->setItem(row , 0 , item_id);
        p_table->setItem(row , 1 , item_name);
        p_table->setItem(row , 2 , item_password);

        if (tab == "teacher") {
            QString courseID = query.value(3).toString();
            QTableWidgetItem *item_courseID = new QTableWidgetItem;
            item_courseID->setText(courseID);
            p_table->setItem(row, 3, item_courseID);
        }
        row++;
    }
}

void Administrator::on_tea_delete_clicked()
{
    delete_account("teacher");
}

void Administrator::on_tea_add_clicked()
{
    // 弹出addtea弹框
    p_addtea = new AddTea;
    p_addtea -> show();
}

void Administrator::on_tea_refresh_clicked()
{
    refresh("teacher");
}

void Administrator::on_stu_refresh_clicked()
{
    refresh("student");
}

void Administrator::on_stu_delete_clicked()
{
    delete_account("teacher");
}

void Administrator::on_stu_add_clicked()
{
    // 弹出 addstu弹框
    p_addstu = new AddStu;
    p_addstu -> show();
}
