/********************************************************************************
** Form generated from reading UI file 'addhw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDHW_H
#define UI_ADDHW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addhw
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *addhw3;
    QTextEdit *addhw2;
    QTextEdit *addhw1;
    QLabel *label_5;

    void setupUi(QWidget *addhw)
    {
        if (addhw->objectName().isEmpty())
            addhw->setObjectName(QStringLiteral("addhw"));
        addhw->resize(606, 481);
        pushButton = new QPushButton(addhw);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 390, 112, 34));
        pushButton_2 = new QPushButton(addhw);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 390, 112, 34));
        label = new QLabel(addhw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 290, 101, 18));
        label_2 = new QLabel(addhw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 210, 111, 18));
        label_4 = new QLabel(addhw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 30, 121, 18));
        addhw3 = new QTextEdit(addhw);
        addhw3->setObjectName(QStringLiteral("addhw3"));
        addhw3->setGeometry(QRect(240, 270, 221, 71));
        addhw2 = new QTextEdit(addhw);
        addhw2->setObjectName(QStringLiteral("addhw2"));
        addhw2->setGeometry(QRect(240, 190, 221, 71));
        addhw1 = new QTextEdit(addhw);
        addhw1->setObjectName(QStringLiteral("addhw1"));
        addhw1->setGeometry(QRect(240, 110, 221, 71));
        label_5 = new QLabel(addhw);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 120, 111, 18));

        retranslateUi(addhw);

        QMetaObject::connectSlotsByName(addhw);
    } // setupUi

    void retranslateUi(QWidget *addhw)
    {
        addhw->setWindowTitle(QApplication::translate("addhw", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addhw", "refresh", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addhw", "back", Q_NULLPTR));
        label->setText(QApplication::translate("addhw", "homework3", Q_NULLPTR));
        label_2->setText(QApplication::translate("addhw", "homework2", Q_NULLPTR));
        label_4->setText(QApplication::translate("addhw", "add homwwork", Q_NULLPTR));
        label_5->setText(QApplication::translate("addhw", "homework1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addhw: public Ui_addhw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDHW_H
