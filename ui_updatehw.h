/********************************************************************************
** Form generated from reading UI file 'updatehw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEHW_H
#define UI_UPDATEHW_H

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

class Ui_updatehw
{
public:
    QTextEdit *uphw2;
    QTextEdit *uphw1;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QTextEdit *uphw3;
    QPushButton *pushButton;
    QTextEdit *upweek;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *updatehw)
    {
        if (updatehw->objectName().isEmpty())
            updatehw->setObjectName(QStringLiteral("updatehw"));
        updatehw->resize(536, 442);
        uphw2 = new QTextEdit(updatehw);
        uphw2->setObjectName(QStringLiteral("uphw2"));
        uphw2->setGeometry(QRect(180, 220, 311, 71));
        uphw1 = new QTextEdit(updatehw);
        uphw1->setObjectName(QStringLiteral("uphw1"));
        uphw1->setGeometry(QRect(180, 120, 311, 71));
        label_4 = new QLabel(updatehw);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 240, 72, 21));
        label_2 = new QLabel(updatehw);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 72, 21));
        label_5 = new QLabel(updatehw);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 340, 72, 15));
        uphw3 = new QTextEdit(updatehw);
        uphw3->setObjectName(QStringLiteral("uphw3"));
        uphw3->setGeometry(QRect(180, 320, 311, 71));
        pushButton = new QPushButton(updatehw);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 40, 93, 28));
        upweek = new QTextEdit(updatehw);
        upweek->setObjectName(QStringLiteral("upweek"));
        upweek->setGeometry(QRect(180, 80, 71, 21));
        label = new QLabel(updatehw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 72, 15));
        label_3 = new QLabel(updatehw);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 72, 15));
        pushButton_2 = new QPushButton(updatehw);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 80, 93, 28));

        retranslateUi(updatehw);

        QMetaObject::connectSlotsByName(updatehw);
    } // setupUi

    void retranslateUi(QWidget *updatehw)
    {
        updatehw->setWindowTitle(QApplication::translate("updatehw", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatehw", "homework2", Q_NULLPTR));
        label_2->setText(QApplication::translate("updatehw", "\345\221\250\346\254\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("updatehw", "homework3", Q_NULLPTR));
        pushButton->setText(QApplication::translate("updatehw", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("updatehw", "\346\233\264\346\226\260\344\277\241\346\201\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatehw", "homework1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("updatehw", "\344\277\235\345\255\230\346\233\264\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatehw: public Ui_updatehw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEHW_H
