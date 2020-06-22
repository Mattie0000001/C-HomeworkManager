#ifndef ADDTEA_H
#define ADDTEA_H

#include <QWidget>

namespace Ui {
class AddTea;
}

class AddTea : public QWidget
{
    Q_OBJECT

public:
    explicit AddTea(QWidget *parent = nullptr);
    ~AddTea();

private:
    Ui::AddTea *ui;
};

#endif // ADDTEA_H
