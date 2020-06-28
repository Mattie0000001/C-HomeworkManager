/********************************************************************************
** Form generated from reading UI file 'tea.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEA_H
#define UI_TEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tea
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *tea)
    {
        if (tea->objectName().isEmpty())
            tea->setObjectName(QStringLiteral("tea"));
        tea->resize(550, 354);
        pushButton = new QPushButton(tea);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 40, 93, 28));
        pushButton_2 = new QPushButton(tea);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 40, 93, 28));
        label = new QLabel(tea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 120, 72, 15));
        label_2 = new QLabel(tea);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 170, 72, 15));
        label_3 = new QLabel(tea);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 210, 72, 15));
        textEdit = new QTextEdit(tea);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(380, 120, 131, 21));
        textEdit_2 = new QTextEdit(tea);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(380, 170, 131, 21));
        textEdit_3 = new QTextEdit(tea);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(380, 210, 131, 21));
        tableWidget = new QTableWidget(tea);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 256, 192));
        tableWidget->setColumnCount(5);
        tableWidget_2 = new QTableWidget(tea);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 250, 256, 101));
        tableWidget_2->setColumnCount(2);

        retranslateUi(tea);

        QMetaObject::connectSlotsByName(tea);
    } // setupUi

    void retranslateUi(QWidget *tea)
    {
        tea->setWindowTitle(QApplication::translate("tea", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tea", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tea", "\345\210\267\346\226\260", Q_NULLPTR));
        label->setText(QApplication::translate("tea", "\346\225\231\345\270\210\345\247\223\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("tea", "\346\225\231\345\270\210ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("tea", "\350\257\276\347\250\213ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tea: public Ui_tea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEA_H
