#include "administrator.h"
#include "ui_administrator.h"

// 构造函数--初始化ui、打开ui、初始设置
Administrator::Administrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);

// 设置表格属性：选择整行、单行
    ui->table_stu->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选择模式，选择整行
    ui->table_tea->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选择模式，选择整行
    ui->table_stu->setSelectionMode (QAbstractItemView::SingleSelection); //设置选择模式，选择单行
    ui->table_tea->setSelectionMode (QAbstractItemView::SingleSelection); //设置选择模式，选择单行

// 表格填充
    refresh();
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &Administrator::refresh);

// 添加信息后刷新的槽函数连接
    p_addstu = new AddStu;
    p_addtea = new AddTea;
    connect(p_addstu, &AddStu::thisclose, this, &Administrator::refresh);
    connect(p_addtea, &AddTea::thisclose, this, &Administrator::refresh);
}

Administrator::~Administrator()
{
    delete ui;
}

// 删除账号
void Administrator::delete_account(QString tab)
{
// 判断是老师还是学生
    p_table = tab == "student" ? ui->table_stu : ui->table_tea;

// 数据库删除
    // 先禁用外键
    QString stop_foreign = "SET FOREIGN_KEY_CHECKS = 0";
    QSqlQuery query(stop_foreign);

    // 获取当前行数
    int row_index = p_table->currentRow();
    // 如果选中
    if (row_index != -1)
    {
        // 读取id
        QString id = p_table->item(row_index, 0)->text();
        // sql删除
        QString delete_sql = QString("delete from %1 where id = %2").arg(tab, id);
        QSqlQuery query(delete_sql);
        // 如果是学生，有两个表要删
        if (tab == "student")
        {
            // 删除第二个表
            QString delete_stu = QString("delete from homework where id = %2").arg(id);
            QSqlQuery query(delete_stu);
        }
        // 删除失败、打印原因、提示
        if (!query.exec())
        {
            qDebug() << "error" << query.lastError().text();
            QMessageBox::information(this, "提示", "删除失败！", QMessageBox::Ok);
        }
    }

    // 如果没有选中数据，提示
    else
    {
        QMessageBox::information(this, "提示", "请选中数据！", QMessageBox::Ok);
    }

    // 重新启用外键
    QString set_foreign = "SET FOREIGN_KEY_CHECKS = 1";
    QSqlQuery query_foreign(set_foreign);

// 刷新表格，重新渲染数据
    refresh();
}

// 刷新
void Administrator::refresh()
{
// 判断老师还是同学
    p_tab = ui->tabWidget;
    int current_tab = p_tab->currentIndex(); //0为老师，1为学生
    p_table = current_tab ? ui->table_stu : ui->table_tea;
    QString tab = current_tab ? "student" : "teacher";

// 清空当前所有数据
    p_table->clearContents();

// 重新从数据库渲染数据
    // 从表中读取数据
    QString sql = QString("select * from %1").arg(tab);
    QSqlQuery query(sql);

    // 一行一行填充
    int row = 0;
    while (query.next())
    {
        // 从数据库获取信息
        QString id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString password = query.value(2).toString();

        // 实例化tablewidgetitem
        QTableWidgetItem *item_id = new QTableWidgetItem;
        QTableWidgetItem *item_name = new QTableWidgetItem;
        QTableWidgetItem *item_password = new QTableWidgetItem;

        // 向表格item填充数据
        item_id->setText(id);
        item_name->setText(name);
        item_password->setText(password);

        // 将这一行插入表格
        p_table->insertRow(row); // 插入一行
        p_table->setItem(row , 0 , item_id);
        p_table->setItem(row , 1 , item_name);
        p_table->setItem(row , 2 , item_password);

        // 如果是老师，还有一列（courseID）
        if (tab == "teacher")
        {
            QString courseID = query.value(3).toString();
            QTableWidgetItem *item_courseID = new QTableWidgetItem;
            item_courseID->setText(courseID);
            p_table->setItem(row, 3, item_courseID);
        }

        // 行数加一
        row++;
    }
}

// 点击教师界面refresh按钮 -- 刷新
void Administrator::on_tea_refresh_clicked()
{
    refresh();
}

// 点击教师界面delete按钮 -- 调用 delete_account删除
void Administrator::on_tea_delete_clicked()
{
    delete_account("teacher");
}

// 点击教师界面add按钮 -- 打开addtea界面
void Administrator::on_tea_add_clicked()
{
    // 弹出addtea弹框
    p_addtea -> show();
}

// 点击教师界面refresh按钮 -- 刷新
void Administrator::on_stu_refresh_clicked()
{
    refresh();
}

// 点击学生界面delete按钮 -- 调用 delete_account删除
void Administrator::on_stu_delete_clicked()
{
    delete_account("student");
}

// 点击学生界面add按钮 -- 打开addstu界面
void Administrator::on_stu_add_clicked()
{
    // 弹出 addstu弹框
    p_addstu -> show();
}
