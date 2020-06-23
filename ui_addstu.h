/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStu
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *OK;
    QPushButton *Cancel;
    QLineEdit *name;
    QLineEdit *id;
    QLineEdit *password;
    QLabel *label_2;
    QLineEdit *calc;
    QLabel *label_5;
    QLineEdit *prob;
    QLabel *label_6;
    QLineEdit *draw;
    QLabel *label_7;
    QLineEdit *phy;
    QLabel *label_9;
    QLineEdit *circ;

    void setupUi(QWidget *AddStu)
    {
        if (AddStu->objectName().isEmpty())
            AddStu->setObjectName(QStringLiteral("AddStu"));
        AddStu->resize(819, 623);
        label = new QLabel(AddStu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 111, 51));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_3 = new QLabel(AddStu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 60, 111, 51));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_4 = new QLabel(AddStu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 120, 111, 51));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        OK = new QPushButton(AddStu);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(180, 500, 121, 51));
        OK->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        Cancel = new QPushButton(AddStu);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(480, 500, 131, 51));
        Cancel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        name = new QLineEdit(AddStu);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(350, 20, 301, 31));
        id = new QLineEdit(AddStu);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(350, 70, 301, 31));
        password = new QLineEdit(AddStu);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(350, 130, 301, 31));
        label_2 = new QLabel(AddStu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 180, 111, 51));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        calc = new QLineEdit(AddStu);
        calc->setObjectName(QStringLiteral("calc"));
        calc->setGeometry(QRect(350, 190, 301, 31));
        label_5 = new QLabel(AddStu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 240, 161, 51));
        label_5->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        prob = new QLineEdit(AddStu);
        prob->setObjectName(QStringLiteral("prob"));
        prob->setGeometry(QRect(350, 250, 301, 31));
        label_6 = new QLabel(AddStu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 300, 111, 51));
        label_6->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        draw = new QLineEdit(AddStu);
        draw->setObjectName(QStringLiteral("draw"));
        draw->setGeometry(QRect(350, 310, 301, 31));
        label_7 = new QLabel(AddStu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 360, 111, 51));
        label_7->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        phy = new QLineEdit(AddStu);
        phy->setObjectName(QStringLiteral("phy"));
        phy->setGeometry(QRect(350, 370, 301, 31));
        label_9 = new QLabel(AddStu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 410, 111, 51));
        label_9->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        circ = new QLineEdit(AddStu);
        circ->setObjectName(QStringLiteral("circ"));
        circ->setGeometry(QRect(350, 430, 301, 31));
        QWidget::setTabOrder(name, id);
        QWidget::setTabOrder(id, password);
        QWidget::setTabOrder(password, OK);
        QWidget::setTabOrder(OK, Cancel);

        retranslateUi(AddStu);

        QMetaObject::connectSlotsByName(AddStu);
    } // setupUi

    void retranslateUi(QWidget *AddStu)
    {
        AddStu->setWindowTitle(QApplication::translate("AddStu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddStu", "Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddStu", "ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddStu", "Password", Q_NULLPTR));
        OK->setText(QApplication::translate("AddStu", "finsh", Q_NULLPTR));
        Cancel->setText(QApplication::translate("AddStu", "cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddStu", "Calulus ID", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddStu", "Probability ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddStu", "Draw ID", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddStu", "Physics ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddStu", "Ciricuit ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddStu: public Ui_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
