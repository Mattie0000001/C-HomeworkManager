#include "administrator.h"
#include "ui_administrator.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QMessageBox>
#include<QSqlQuery>

Administrator::Administrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);

    // ui 创建表格
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Name" << "ID" << "Password" << "Class");

    // ui 表格样式编辑
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString table = "stuManager";
    refresh(table);
}

Administrator::~Administrator()
{
    delete ui;
}

QString Administrator::getCurrentID() // 获取选中的ID
{
    QString ID ;
    int row = ui->tableWidget->currentRow(); // 获取选中的行数
    if(row != -1)
    {
        ID =  ui->tableWidget->item(row , 1)->text(); // 获取选中行数的第二列的值（即学号）
    }
    return ID;
}

void Administrator::refresh(QString table) // 刷新表格
{
    QList<QStringList> tableData;
    tableData = m_pCreateDB->select_all(table);
    if(!tableData.isEmpty())
    {
        m_pTableWidget->clearTableData(); // 清除表格数据

        QListIterator<QStringList> itr(tableData);
        while(itr.hasNext())
        {
            m_pTableWidget->appendRowData(itr.next());
        }
    }

}

void Administrator::clearTableData() // 清除表格数据
{
    int rowCount = ui->tableWidget->rowCount();
    for(int r = rowCount-1 ; r >=0 ; r--)
    {
        ui->tableWidget->removeRow(r);
    }
}

void Administrator::appendRowData(QStringList rowData)
{
    int row = ui->tableWidget->rowCount();

    ui->tableWidget->insertRow(row);

    for(int i  = 0 ; i < rowData.size() ; i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setText(rowData.at(i));
        ui->tableWidget->setItem(row , i , item);
    }
}

void Administrator::on_Add_clicked()
{
    addmessage = new AddMessage;
    addmessage->show();
}

void Administrator::on_Delete_clicked()
{
    QString ID = m_pTableWidget->getCurrentID();
    if(ID.isEmpty())
    {
        QMessageBox::information(this , tr("提示") , tr("请选中一条记录！"));
        return ;
    }

    QMessageBox::StandardButton button = QMessageBox::question(this , tr("提示") ,tr("确定删除这一条记录？"));
    if(button == QMessageBox::Yes)
    {
        // 删除数据库
        ExecDelSql(ID);
    }

}

void Administrator::ExecAddSql(QVariantMap stuInfo)
{
    // 连接数据库，并添加记录
    QString stuName = stuInfo.value("stuName").toString();
    QString classID = stuInfo.value("courseID").toString();
    QString id = stuInfo.value("id").toString();
    QString password = stuInfo.value("password").toString();

    QString sql;
    sql = QString("insert into Sthdent (stuName, classID, id, password)"
                  "VALUES ('%1', '%2' , '%3' , '%4')")
                  .arg(stuName).arg(classID).arg(id).arg(password);

    QSqlQuery query;
    bool ok = query.exec(sql);
    if(ok)
    {
        QStringList rowData;
        rowData << stuName << classID << id << password;
        m_pTableWidget->appendRowData(rowData);

        QMessageBox::information(this ,tr("提示") , tr("添加成功!"));
    }
    else
    {
        QMessageBox::information(this ,tr("提示") , tr("添加失败!"));
    }
}

void Administrator::ExecDelSql(QString ID)
{
    // 连接数据库，并删除记录
    QSqlQuery query;
    QString sql;
    sql = QString("DELETE FROM Student where id = '%1' ").arg(ID);

    bool ok = query.exec(sql);
    if(ok)
    {
        QMessageBox::information(this ,tr("提示") , tr("删除成功!"));
        refresh("Student"); // 刷新视图
    }
    else
    {
        QMessageBox::information(this ,tr("提示") , tr("删除失败!"));
    }
}
