/***************************
 * 添加账户界面              *
 * 向数据库添加学生和老师账户  *
 * ************************/
#ifndef ADDMESSAGE_H
#define ADDMESSAGE_H

#include <QWidget>
#include <QVariantMap>

namespace Ui {
class AddMessage;
}

class AddMessage : public QWidget
{
    Q_OBJECT

public:
    explicit AddMessage(QWidget *parent = nullptr);
    ~AddMessage();

private:
    Ui::AddMessage *ui;

private slots:
    void on_OK_clicked(); // 确定按钮--槽函数

    void on_Cancel_clicked(); // 取消按钮--槽函数

signals:
    void signalStuInfo(QVariantMap stuInfo); // 信号：传送学生信息
};

#endif // ADDMESSAGE_H
