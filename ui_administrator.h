/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QTableWidget *tableWidget;
    QPushButton *Add;
    QPushButton *Delete;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(840, 602);
        tableWidget = new QTableWidget(Administrator);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 80, 851, 531));
        Add = new QPushButton(Administrator);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(570, 20, 112, 34));
        Delete = new QPushButton(Administrator);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(720, 20, 112, 34));

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Form", Q_NULLPTR));
        Add->setText(QApplication::translate("Administrator", "\346\267\273\345\212\240", Q_NULLPTR));
        Delete->setText(QApplication::translate("Administrator", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
