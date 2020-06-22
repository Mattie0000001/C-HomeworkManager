/***************************
 * 添加账户界面              *
 * 向数据库添加学生和老师账户  *
 * ************************/
#ifndef ADDSTU_H
#define ADDSTUH

#include <QWidget>
#include <QVariantMap>

namespace Ui {
class AddStu;
}

class AddStu : public QWidget
{
    Q_OBJECT

public:
    explicit AddStu(QWidget *parent = nullptr);
    ~AddStu();

private:
    Ui::AddStu *ui;
};

#endif // ADDSTU_H
