/********************************************************************************
** Form generated from reading UI file 'physics.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHYSICS_H
#define UI_PHYSICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Physics
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *Physics)
    {
        if (Physics->objectName().isEmpty())
            Physics->setObjectName(QStringLiteral("Physics"));
        Physics->resize(303, 229);
        tableWidget = new QTableWidget(Physics);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 256, 192));
        tableWidget->setColumnCount(5);

        retranslateUi(Physics);

        QMetaObject::connectSlotsByName(Physics);
    } // setupUi

    void retranslateUi(QWidget *Physics)
    {
        Physics->setWindowTitle(QApplication::translate("Physics", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Physics: public Ui_Physics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHYSICS_H
