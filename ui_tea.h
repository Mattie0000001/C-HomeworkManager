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
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *tea)
    {
        if (tea->objectName().isEmpty())
            tea->setObjectName(QStringLiteral("tea"));
        tea->resize(585, 510);
        pushButton = new QPushButton(tea);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 470, 93, 28));
        pushButton_2 = new QPushButton(tea);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 470, 93, 28));
        label = new QLabel(tea);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 72, 15));
        label_2 = new QLabel(tea);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 140, 71, 16));
        label_3 = new QLabel(tea);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 200, 72, 15));
        textEdit = new QTextEdit(tea);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 80, 131, 21));
        textEdit_2 = new QTextEdit(tea);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(130, 140, 131, 21));
        textEdit_3 = new QTextEdit(tea);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(130, 200, 131, 21));
        tableWidget = new QTableWidget(tea);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 260, 501, 192));
        tableWidget->setColumnCount(10);
        tableWidget_2 = new QTableWidget(tea);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(330, 80, 211, 151));
        tableWidget_2->setColumnCount(4);
        pushButton_3 = new QPushButton(tea);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 470, 111, 28));
        label_4 = new QLabel(tea);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 60, 181, 16));
        label_5 = new QLabel(tea);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 240, 68, 15));
        label_6 = new QLabel(tea);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 10, 321, 41));

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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tea", "StudentID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tea", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tea", "week", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tea", "Course ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("tea", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("tea", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("tea", "Count", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("tea", "\346\237\245\347\234\213\344\275\234\344\270\232\345\206\205\345\256\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("tea", "\344\275\234\344\270\232\344\270\212\344\272\244\346\203\205\345\206\265\347\273\237\350\256\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("tea", "\345\255\246\347\224\237\345\220\215\345\215\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("tea", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Teacher Interface</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tea: public Ui_tea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEA_H
