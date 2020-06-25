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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stu
{
public:
    QPushButton *update;
    QPushButton *back;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *name;
    QWidget *all;
    QVBoxLayout *verticalLayout;
    QWidget *cal;
    QHBoxLayout *horizontalLayout;
    QLabel *calculus;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cal_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PS;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *PS_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ED;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *ED_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *circuit;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *circuit_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *physics;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *physics_3;

    void setupUi(QWidget *Stu)
    {
        if (Stu->objectName().isEmpty())
            Stu->setObjectName(QStringLiteral("Stu"));
        Stu->resize(1103, 639);
        update = new QPushButton(Stu);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(700, 120, 112, 34));
        back = new QPushButton(Stu);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(870, 120, 112, 34));
        label_5 = new QLabel(Stu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 20, 381, 61));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        label_6 = new QLabel(Stu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 260, 81, 18));
        label = new QLabel(Stu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 71, 20));
        name = new QLineEdit(Stu);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(170, 60, 113, 25));
        all = new QWidget(Stu);
        all->setObjectName(QStringLiteral("all"));
        all->setGeometry(QRect(40, 140, 521, 257));
        verticalLayout = new QVBoxLayout(all);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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


        verticalLayout->addWidget(widget_4);


        retranslateUi(Stu);

        QMetaObject::connectSlotsByName(Stu);
    } // setupUi

    void retranslateUi(QWidget *Stu)
    {
        Stu->setWindowTitle(QApplication::translate("Stu", "Form", Q_NULLPTR));
        update->setText(QApplication::translate("Stu", "update/save", Q_NULLPTR));
        back->setText(QApplication::translate("Stu", "back", Q_NULLPTR));
        label_5->setText(QApplication::translate("Stu", "HW information manager", Q_NULLPTR));
        label_6->setText(QString());
        label->setText(QApplication::translate("Stu", "welcome ", Q_NULLPTR));
        calculus->setText(QApplication::translate("Stu", "calculus", Q_NULLPTR));
        cal_2->setText(QString());
        label_3->setText(QString());
        PS->setText(QApplication::translate("Stu", "probability and statistic", Q_NULLPTR));
        PS_3->setText(QString());
        ED->setText(QApplication::translate("Stu", "Engineering drawing", Q_NULLPTR));
        ED_3->setText(QString());
        circuit->setText(QApplication::translate("Stu", "circuit", Q_NULLPTR));
        circuit_3->setText(QString());
        physics->setText(QApplication::translate("Stu", "physics", Q_NULLPTR));
        physics_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Stu: public Ui_Stu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_H
