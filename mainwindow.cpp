#include "mainwindow.h"
#include "ui_mainwindow.h"

// 构造函数--初始化ui、打开ui、初始设置
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

// 连接数据库
    p_database = new CreateDb;
    p_database->initDB();

// 默认radio选中admin
    ui->Radio_admin->setChecked(true);
    thisuser = "admin";

// 信号与槽 --- administrator、student界面与teacher界面关闭时重新弹出登录界面
    p_admin = new Administrator;
    p_stu = new Stu;
    p_tea = new tea;
    connect(p_stu, &Stu::mainwindow_show, this, &MainWindow::open_mainwindow);
    connect(p_tea, &tea::mainwindow_show, this, &MainWindow::open_mainwindow);
    connect(p_admin, &Administrator::mainwindow_show, this, &MainWindow::open_mainwindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 槽：重新打开界面
void MainWindow::open_mainwindow()
{
    this->show();
}

// 登录按钮点击
void MainWindow::on_Btn_login_clicked()
{
// 获得id和密码
    ID = ui->Input_ID->text();
    password = ui->Input_password->text();

// 先判断id 密码是否为空
    // id 为空
    if (ID.isEmpty())
    {
        QMessageBox::information(this, "提示", "请输入ID", QMessageBox::Ok);
    }
    // 密码为空
    else if (password.isEmpty())
    {
        QMessageBox::information(this, "提示", "请输入密码", QMessageBox::Ok);
    }
    // 都不空
    else
    {
    // 数据库查询
        QString limit_info = QString("id = %1").arg(ID);

        // 调用database中函数查询
        // 查询准备
        QString select_sql = QString("select * from %1 where %2").arg(thisuser, limit_info);
        QSqlQuery query(select_sql);

        // 查询执行
        query.first();
        // rec即查询结果
        QSqlRecord rec = query.record();
        // rec_value: passwork是第几个结果
        int rec_index = rec.indexOf("password");
        QString rec_value = query.value(rec_index).toString();

        if (rec_value == NULL)
        {
            QMessageBox::information(this, "提示", "查询失败", QMessageBox::Ok);
        }
        else if (rec_value == password)
        {
        // 匹配，登录成功
            qDebug() << "----------登录成功-------------";
            openUI();
        }
        else
        {
            QMessageBox::information(this, "提示", "密码错误！", QMessageBox::Ok);
        }
    }
}

// 登录成功后，根据身份打开不同ui
void MainWindow::openUI () {
    if (thisuser == "admin")
    {
        this->hide();
        p_admin->show();
    }
    else if (thisuser == "student")
    {
        this->hide();
        p_stu->init(ID); // 初始化（把id传值进去）
        p_stu->show();
    }
    else
    {
        this->hide();
        p_tea->init2(ID); // 初始化（把id传值进去）
        p_tea->show();
    }
}

// radio选中相应给thisuser赋值
void MainWindow::on_Radio_student_clicked()
{
    thisuser = "student";
}

void MainWindow::on_Radio_teacher_clicked()
{
    thisuser = "teacher";
}

void MainWindow::on_Radio_admin_clicked()
{
    thisuser = "admin";
}
