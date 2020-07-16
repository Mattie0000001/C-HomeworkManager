/********************************************************************************
** Form generated from reading UI file 'circuit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCUIT_H
#define UI_CIRCUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Circuit
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *Circuit)
    {
        if (Circuit->objectName().isEmpty())
            Circuit->setObjectName(QStringLiteral("Circuit"));
        Circuit->resize(307, 220);
        tableWidget = new QTableWidget(Circuit);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 256, 192));
        tableWidget->setColumnCount(5);

        retranslateUi(Circuit);

        QMetaObject::connectSlotsByName(Circuit);
    } // setupUi

    void retranslateUi(QWidget *Circuit)
    {
        Circuit->setWindowTitle(QApplication::translate("Circuit", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Circuit: public Ui_Circuit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCUIT_H
