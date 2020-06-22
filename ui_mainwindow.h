/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *Radio_admin;
    QRadioButton *Radio_student;
    QRadioButton *Radio_teacher;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Input_ID;
    QLineEdit *Input_password;
    QPushButton *Btn_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(724, 421);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Radio_admin = new QRadioButton(centralwidget);
        Radio_admin->setObjectName(QStringLiteral("Radio_admin"));
        Radio_admin->setGeometry(QRect(30, 90, 132, 22));
        Radio_student = new QRadioButton(centralwidget);
        Radio_student->setObjectName(QStringLiteral("Radio_student"));
        Radio_student->setGeometry(QRect(30, 170, 132, 22));
        Radio_teacher = new QRadioButton(centralwidget);
        Radio_teacher->setObjectName(QStringLiteral("Radio_teacher"));
        Radio_teacher->setGeometry(QRect(30, 250, 132, 22));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(170, 0, 20, 431));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 70, 91, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 167, 111, 31));
        Input_ID = new QLineEdit(centralwidget);
        Input_ID->setObjectName(QStringLiteral("Input_ID"));
        Input_ID->setGeometry(QRect(430, 70, 251, 31));
        Input_password = new QLineEdit(centralwidget);
        Input_password->setObjectName(QStringLiteral("Input_password"));
        Input_password->setGeometry(QRect(430, 170, 251, 31));
        Btn_login = new QPushButton(centralwidget);
        Btn_login->setObjectName(QStringLiteral("Btn_login"));
        Btn_login->setGeometry(QRect(390, 260, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        Btn_login->setFont(font1);
        Btn_login->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background: rgb(0, 0, 127);\n"
"color: white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 724, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Radio_admin->setText(QApplication::translate("MainWindow", "Admin", Q_NULLPTR));
        Radio_student->setText(QApplication::translate("MainWindow", "Student", Q_NULLPTR));
        Radio_teacher->setText(QApplication::translate("MainWindow", "Teacher", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        Btn_login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
