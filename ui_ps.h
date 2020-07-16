/********************************************************************************
** Form generated from reading UI file 'ps.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PS_H
#define UI_PS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ps
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *Ps)
    {
        if (Ps->objectName().isEmpty())
            Ps->setObjectName(QStringLiteral("Ps"));
        Ps->setEnabled(true);
        Ps->resize(320, 250);
        tableWidget = new QTableWidget(Ps);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 281, 211));
        tableWidget->setColumnCount(5);

        retranslateUi(Ps);

        QMetaObject::connectSlotsByName(Ps);
    } // setupUi

    void retranslateUi(QWidget *Ps)
    {
        Ps->setWindowTitle(QApplication::translate("Ps", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ps: public Ui_Ps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PS_H
