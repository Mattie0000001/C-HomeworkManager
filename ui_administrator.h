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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QTabWidget *tabWidget;
    QWidget *tea;
    QTableWidget *table_tea;
    QPushButton *tea_add;
    QPushButton *tea_refresh;
    QPushButton *tea_delete;
    QPushButton *tea_back;
    QWidget *stu;
    QTableWidget *table_stu;
    QPushButton *stu_delete;
    QPushButton *stu_add;
    QPushButton *stu_refresh;
    QPushButton *stu_back;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(840, 602);
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 851, 1000));
        tea = new QWidget();
        tea->setObjectName(QStringLiteral("tea"));
        table_tea = new QTableWidget(tea);
        if (table_tea->columnCount() < 4)
            table_tea->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(156, 156, 154));
        table_tea->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_tea->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_tea->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_tea->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (table_tea->rowCount() < 6)
            table_tea->setRowCount(6);
        table_tea->setObjectName(QStringLiteral("table_tea"));
        table_tea->setGeometry(QRect(10, 80, 831, 501));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(table_tea->sizePolicy().hasHeightForWidth());
        table_tea->setSizePolicy(sizePolicy);
        table_tea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        table_tea->setShowGrid(true);
        table_tea->setSortingEnabled(true);
        table_tea->setRowCount(6);
        table_tea->setColumnCount(4);
        table_tea->horizontalHeader()->setCascadingSectionResizes(true);
        table_tea->horizontalHeader()->setDefaultSectionSize(150);
        table_tea->horizontalHeader()->setMinimumSectionSize(100);
        table_tea->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_tea->horizontalHeader()->setStretchLastSection(true);
        table_tea->verticalHeader()->setVisible(false);
        table_tea->verticalHeader()->setCascadingSectionResizes(true);
        table_tea->verticalHeader()->setDefaultSectionSize(60);
        table_tea->verticalHeader()->setMinimumSectionSize(50);
        table_tea->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_tea->verticalHeader()->setStretchLastSection(true);
        tea_add = new QPushButton(tea);
        tea_add->setObjectName(QStringLiteral("tea_add"));
        tea_add->setGeometry(QRect(680, 20, 112, 34));
        tea_add->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        tea_refresh = new QPushButton(tea);
        tea_refresh->setObjectName(QStringLiteral("tea_refresh"));
        tea_refresh->setGeometry(QRect(340, 20, 112, 34));
        tea_refresh->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        tea_delete = new QPushButton(tea);
        tea_delete->setObjectName(QStringLiteral("tea_delete"));
        tea_delete->setGeometry(QRect(510, 20, 112, 34));
        tea_delete->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        tea_back = new QPushButton(tea);
        tea_back->setObjectName(QStringLiteral("tea_back"));
        tea_back->setGeometry(QRect(170, 20, 112, 34));
        tea_back->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        tabWidget->addTab(tea, QString());
        stu = new QWidget();
        stu->setObjectName(QStringLiteral("stu"));
        table_stu = new QTableWidget(stu);
        if (table_stu->columnCount() < 3)
            table_stu->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_stu->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_stu->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_stu->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        if (table_stu->rowCount() < 6)
            table_stu->setRowCount(6);
        table_stu->setObjectName(QStringLiteral("table_stu"));
        table_stu->setGeometry(QRect(10, 80, 831, 501));
        sizePolicy.setHeightForWidth(table_stu->sizePolicy().hasHeightForWidth());
        table_stu->setSizePolicy(sizePolicy);
        table_stu->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        table_stu->setShowGrid(true);
        table_stu->setSortingEnabled(true);
        table_stu->setRowCount(6);
        table_stu->setColumnCount(3);
        table_stu->horizontalHeader()->setCascadingSectionResizes(true);
        table_stu->horizontalHeader()->setDefaultSectionSize(150);
        table_stu->horizontalHeader()->setMinimumSectionSize(100);
        table_stu->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_stu->horizontalHeader()->setStretchLastSection(true);
        table_stu->verticalHeader()->setVisible(false);
        table_stu->verticalHeader()->setCascadingSectionResizes(true);
        table_stu->verticalHeader()->setDefaultSectionSize(60);
        table_stu->verticalHeader()->setMinimumSectionSize(50);
        table_stu->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_stu->verticalHeader()->setStretchLastSection(true);
        stu_delete = new QPushButton(stu);
        stu_delete->setObjectName(QStringLiteral("stu_delete"));
        stu_delete->setGeometry(QRect(510, 20, 112, 34));
        stu_delete->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        stu_add = new QPushButton(stu);
        stu_add->setObjectName(QStringLiteral("stu_add"));
        stu_add->setGeometry(QRect(680, 20, 112, 34));
        stu_add->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        stu_refresh = new QPushButton(stu);
        stu_refresh->setObjectName(QStringLiteral("stu_refresh"));
        stu_refresh->setGeometry(QRect(340, 20, 112, 34));
        stu_refresh->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        stu_back = new QPushButton(stu);
        stu_back->setObjectName(QStringLiteral("stu_back"));
        stu_back->setGeometry(QRect(170, 20, 112, 34));
        stu_back->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        tabWidget->addTab(stu, QString());

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table_tea->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Administrator", "id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table_tea->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Administrator", "name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table_tea->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Administrator", "password", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table_tea->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Administrator", "courseID", Q_NULLPTR));
        tea_add->setText(QApplication::translate("Administrator", "add", Q_NULLPTR));
        tea_refresh->setText(QApplication::translate("Administrator", "refresh", Q_NULLPTR));
        tea_delete->setText(QApplication::translate("Administrator", "delete", Q_NULLPTR));
        tea_back->setText(QApplication::translate("Administrator", "back", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tea), QApplication::translate("Administrator", "Teacher", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = table_stu->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Administrator", "id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = table_stu->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Administrator", "name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = table_stu->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Administrator", "password", Q_NULLPTR));
        stu_delete->setText(QApplication::translate("Administrator", "delete", Q_NULLPTR));
        stu_add->setText(QApplication::translate("Administrator", "add", Q_NULLPTR));
        stu_refresh->setText(QApplication::translate("Administrator", "refresh", Q_NULLPTR));
        stu_back->setText(QApplication::translate("Administrator", "back", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(stu), QApplication::translate("Administrator", "Student", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
