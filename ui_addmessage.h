/********************************************************************************
** Form generated from reading UI file 'addmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMESSAGE_H
#define UI_ADDMESSAGE_H

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

class Ui_AddMessage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *OK;
    QPushButton *Cancel;
    QLineEdit *stuName;
    QLineEdit *classID;
    QLineEdit *stuID;
    QLineEdit *password;

    void setupUi(QWidget *AddMessage)
    {
        if (AddMessage->objectName().isEmpty())
            AddMessage->setObjectName(QStringLiteral("AddMessage"));
        AddMessage->resize(819, 544);
        label = new QLabel(AddMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 40, 111, 51));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_2 = new QLabel(AddMessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 130, 111, 51));
        label_2->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_3 = new QLabel(AddMessage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 220, 111, 51));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        label_4 = new QLabel(AddMessage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 320, 111, 51));
        label_4->setStyleSheet(QStringLiteral("font: 16pt \"Agency FB\";"));
        OK = new QPushButton(AddMessage);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(190, 420, 121, 51));
        OK->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        Cancel = new QPushButton(AddMessage);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(460, 420, 131, 51));
        Cancel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        stuName = new QLineEdit(AddMessage);
        stuName->setObjectName(QStringLiteral("stuName"));
        stuName->setGeometry(QRect(350, 40, 301, 41));
        classID = new QLineEdit(AddMessage);
        classID->setObjectName(QStringLiteral("classID"));
        classID->setGeometry(QRect(350, 130, 301, 41));
        stuID = new QLineEdit(AddMessage);
        stuID->setObjectName(QStringLiteral("stuID"));
        stuID->setGeometry(QRect(350, 220, 301, 41));
        password = new QLineEdit(AddMessage);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(350, 330, 301, 41));
        QWidget::setTabOrder(stuName, classID);
        QWidget::setTabOrder(classID, stuID);
        QWidget::setTabOrder(stuID, password);
        QWidget::setTabOrder(password, OK);
        QWidget::setTabOrder(OK, Cancel);

        retranslateUi(AddMessage);

        QMetaObject::connectSlotsByName(AddMessage);
    } // setupUi

    void retranslateUi(QWidget *AddMessage)
    {
        AddMessage->setWindowTitle(QApplication::translate("AddMessage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddMessage", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddMessage", "Class", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddMessage", "ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddMessage", "Password", Q_NULLPTR));
        OK->setText(QApplication::translate("AddMessage", "finsh", Q_NULLPTR));
        Cancel->setText(QApplication::translate("AddMessage", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddMessage: public Ui_AddMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMESSAGE_H
