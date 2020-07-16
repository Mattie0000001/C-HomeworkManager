/********************************************************************************
** Form generated from reading UI file 'hwdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWDETAIL_H
#define UI_HWDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hwdetail
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *hwdetail)
    {
        if (hwdetail->objectName().isEmpty())
            hwdetail->setObjectName(QStringLiteral("hwdetail"));
        hwdetail->resize(742, 361);
        label = new QLabel(hwdetail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 381, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        tableWidget = new QTableWidget(hwdetail);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setGeometry(QRect(20, 70, 691, 191));
        tableWidget->setMinimumSize(QSize(691, 0));
        tableWidget->setMaximumSize(QSize(691, 16777215));
        tableWidget->setToolTipDuration(-4);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setDefaultSectionSize(143);
        pushButton = new QPushButton(hwdetail);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 290, 112, 34));
        pushButton_2 = new QPushButton(hwdetail);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 290, 112, 34));
        pushButton_3 = new QPushButton(hwdetail);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 290, 112, 34));
        pushButton_4 = new QPushButton(hwdetail);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 290, 112, 34));
        pushButton_5 = new QPushButton(hwdetail);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(600, 290, 112, 34));

        retranslateUi(hwdetail);

        QMetaObject::connectSlotsByName(hwdetail);
    } // setupUi

    void retranslateUi(QWidget *hwdetail)
    {
        hwdetail->setWindowTitle(QApplication::translate("hwdetail", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("hwdetail", "Detail of Homework", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("hwdetail", "CourseID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("hwdetail", "Week", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("hwdetail", "Homework1     ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("hwdetail", "Homework2     ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("hwdetail", "Homework3     ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("hwdetail", "back", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("hwdetail", "add", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("hwdetail", "modify", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("hwdetail", "delete", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("hwdetail", "refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hwdetail: public Ui_hwdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWDETAIL_H
