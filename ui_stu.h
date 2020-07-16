/********************************************************************************
** Form generated from reading UI file 'stu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_H
#define UI_STU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stu
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *update;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *back;
    QWidget *all;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QWidget *cal;
    QHBoxLayout *horizontalLayout;
    QLabel *calculus;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cal_2;
    QPushButton *cal_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PS;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *PS_3;
    QPushButton *PS_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ED;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *ED_3;
    QPushButton *ED_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *circuit;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *circuit_3;
    QPushButton *circuit_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *physics;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *physics_3;
    QPushButton *physics_2;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *week1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Stu)
    {
        if (Stu->objectName().isEmpty())
            Stu->setObjectName(QStringLiteral("Stu"));
        Stu->resize(800, 600);
        centralwidget = new QWidget(Stu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 10, 699, 32));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(60, 50, 641, 431));
        verticalLayout_2 = new QVBoxLayout(widget_8);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(widget_6);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        name = new QLineEdit(widget_6);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_7->addWidget(name);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        horizontalLayout_6->addWidget(widget_6);

        update = new QPushButton(widget_7);
        update->setObjectName(QStringLiteral("update"));

        horizontalLayout_6->addWidget(update);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_8 = new QHBoxLayout(widget_5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        back = new QPushButton(widget_5);
        back->setObjectName(QStringLiteral("back"));

        horizontalLayout_8->addWidget(back);


        horizontalLayout_6->addWidget(widget_5);


        verticalLayout_2->addWidget(widget_7);

        all = new QWidget(widget_8);
        all->setObjectName(QStringLiteral("all"));
        verticalLayout = new QVBoxLayout(all);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        cal = new QWidget(all);
        cal->setObjectName(QStringLiteral("cal"));
        horizontalLayout = new QHBoxLayout(cal);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        calculus = new QLabel(cal);
        calculus->setObjectName(QStringLiteral("calculus"));

        horizontalLayout->addWidget(calculus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cal_2 = new QCheckBox(cal);
        cal_2->setObjectName(QStringLiteral("cal_2"));
        cal_2->setChecked(false);
        cal_2->setTristate(true);

        horizontalLayout->addWidget(cal_2);

        cal_3 = new QPushButton(cal);
        cal_3->setObjectName(QStringLiteral("cal_3"));

        horizontalLayout->addWidget(cal_3);

        label_3 = new QLabel(cal);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout->addWidget(cal);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(all);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        PS = new QLabel(widget);
        PS->setObjectName(QStringLiteral("PS"));

        horizontalLayout_2->addWidget(PS);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        PS_3 = new QCheckBox(widget);
        PS_3->setObjectName(QStringLiteral("PS_3"));
        PS_3->setChecked(false);

        horizontalLayout_2->addWidget(PS_3);

        PS_2 = new QPushButton(widget);
        PS_2->setObjectName(QStringLiteral("PS_2"));

        horizontalLayout_2->addWidget(PS_2);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(all);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ED = new QLabel(widget_2);
        ED->setObjectName(QStringLiteral("ED"));

        horizontalLayout_3->addWidget(ED);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ED_3 = new QCheckBox(widget_2);
        ED_3->setObjectName(QStringLiteral("ED_3"));
        ED_3->setChecked(false);

        horizontalLayout_3->addWidget(ED_3);

        ED_2 = new QPushButton(widget_2);
        ED_2->setObjectName(QStringLiteral("ED_2"));

        horizontalLayout_3->addWidget(ED_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget_3 = new QWidget(all);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        circuit = new QLabel(widget_3);
        circuit->setObjectName(QStringLiteral("circuit"));

        horizontalLayout_4->addWidget(circuit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        circuit_3 = new QCheckBox(widget_3);
        circuit_3->setObjectName(QStringLiteral("circuit_3"));
        circuit_3->setChecked(false);

        horizontalLayout_4->addWidget(circuit_3);

        circuit_2 = new QPushButton(widget_3);
        circuit_2->setObjectName(QStringLiteral("circuit_2"));

        horizontalLayout_4->addWidget(circuit_2);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget_4 = new QWidget(all);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        physics = new QLabel(widget_4);
        physics->setObjectName(QStringLiteral("physics"));

        horizontalLayout_5->addWidget(physics);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        physics_3 = new QCheckBox(widget_4);
        physics_3->setObjectName(QStringLiteral("physics_3"));
        physics_3->setChecked(false);

        horizontalLayout_5->addWidget(physics_3);

        physics_2 = new QPushButton(widget_4);
        physics_2->setObjectName(QStringLiteral("physics_2"));

        horizontalLayout_5->addWidget(physics_2);


        verticalLayout->addWidget(widget_4);


        verticalLayout_2->addWidget(all);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 250, 81, 18));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 10, 112, 34));
        week1 = new QLineEdit(centralwidget);
        week1->setObjectName(QStringLiteral("week1"));
        week1->setGeometry(QRect(660, 10, 41, 31));
        Stu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Stu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Stu->setStatusBar(statusbar);

        retranslateUi(Stu);

        QMetaObject::connectSlotsByName(Stu);
    } // setupUi

    void retranslateUi(QMainWindow *Stu)
    {
        Stu->setWindowTitle(QApplication::translate("Stu", "MainWindow", Q_NULLPTR));
        label_5->setText(QApplication::translate("Stu", "HW information manager", Q_NULLPTR));
        label->setText(QApplication::translate("Stu", "welcome ", Q_NULLPTR));
        update->setText(QApplication::translate("Stu", "update/save", Q_NULLPTR));
        back->setText(QApplication::translate("Stu", "back", Q_NULLPTR));
        calculus->setText(QApplication::translate("Stu", "calculus", Q_NULLPTR));
        cal_2->setText(QString());
        cal_3->setText(QApplication::translate("Stu", "text", Q_NULLPTR));
        label_3->setText(QString());
        PS->setText(QApplication::translate("Stu", "probability and statistic", Q_NULLPTR));
        PS_3->setText(QString());
        PS_2->setText(QApplication::translate("Stu", "text", Q_NULLPTR));
        ED->setText(QApplication::translate("Stu", "Engineering drawing", Q_NULLPTR));
        ED_3->setText(QString());
        ED_2->setText(QApplication::translate("Stu", "text", Q_NULLPTR));
        circuit->setText(QApplication::translate("Stu", "circuit", Q_NULLPTR));
        circuit_3->setText(QString());
        circuit_2->setText(QApplication::translate("Stu", "text", Q_NULLPTR));
        physics->setText(QApplication::translate("Stu", "physics", Q_NULLPTR));
        physics_3->setText(QString());
        physics_2->setText(QApplication::translate("Stu", "text", Q_NULLPTR));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("Stu", "week", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Stu: public Ui_Stu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_H
