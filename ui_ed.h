/********************************************************************************
** Form generated from reading UI file 'ed.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ED_H
#define UI_ED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ed
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *Ed)
    {
        if (Ed->objectName().isEmpty())
            Ed->setObjectName(QStringLiteral("Ed"));
        Ed->resize(291, 217);
        tableWidget = new QTableWidget(Ed);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 256, 192));
        tableWidget->setColumnCount(5);

        retranslateUi(Ed);

        QMetaObject::connectSlotsByName(Ed);
    } // setupUi

    void retranslateUi(QWidget *Ed)
    {
        Ed->setWindowTitle(QApplication::translate("Ed", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ed: public Ui_Ed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ED_H
