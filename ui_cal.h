/********************************************************************************
** Form generated from reading UI file 'cal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAL_H
#define UI_CAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cal
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *Cal)
    {
        if (Cal->objectName().isEmpty())
            Cal->setObjectName(QStringLiteral("Cal"));
        Cal->resize(320, 235);
        tableWidget = new QTableWidget(Cal);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 20, 256, 192));
        tableWidget->setColumnCount(5);

        retranslateUi(Cal);

        QMetaObject::connectSlotsByName(Cal);
    } // setupUi

    void retranslateUi(QWidget *Cal)
    {
        Cal->setWindowTitle(QApplication::translate("Cal", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cal: public Ui_Cal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAL_H
