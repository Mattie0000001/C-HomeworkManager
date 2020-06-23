/********************************************************************************
** Form generated from reading UI file 'addtea.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEA_H
#define UI_ADDTEA_H

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

class Ui_AddTea
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Cancel;
    QLineEdit *courseID;
    QLineEdit *password;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QPushButton *OK;
    QLineEdit *id;

    void setupUi(QWidget *AddTea)
    {
        if (AddTea->objectName().isEmpty())
            AddTea->setObjectName(QStringLiteral("AddTea"));
        AddTea->resize(756, 579);
        label_3 = new QLabel(AddTea);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 270, 111, 51));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_4 = new QLabel(AddTea);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 360, 111, 51));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        Cancel = new QPushButton(AddTea);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(430, 460, 131, 51));
        Cancel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        courseID = new QLineEdit(AddTea);
        courseID->setObjectName(QStringLiteral("courseID"));
        courseID->setGeometry(QRect(320, 170, 301, 41));
        password = new QLineEdit(AddTea);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(320, 370, 301, 41));
        label = new QLabel(AddTea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 80, 111, 51));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        name = new QLineEdit(AddTea);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(320, 80, 301, 41));
        label_2 = new QLabel(AddTea);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 170, 111, 51));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        OK = new QPushButton(AddTea);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(160, 460, 121, 51));
        OK->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        id = new QLineEdit(AddTea);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(320, 270, 301, 41));

        retranslateUi(AddTea);

        QMetaObject::connectSlotsByName(AddTea);
    } // setupUi

    void retranslateUi(QWidget *AddTea)
    {
        AddTea->setWindowTitle(QApplication::translate("AddTea", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddTea", "ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddTea", "Password", Q_NULLPTR));
        Cancel->setText(QApplication::translate("AddTea", "cancel", Q_NULLPTR));
        label->setText(QApplication::translate("AddTea", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddTea", "courseID", Q_NULLPTR));
        OK->setText(QApplication::translate("AddTea", "finsh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddTea: public Ui_AddTea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEA_H
