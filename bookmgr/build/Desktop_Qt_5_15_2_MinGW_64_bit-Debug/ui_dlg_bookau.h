/********************************************************************************
** Form generated from reading UI file 'dlg_bookau.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BOOKAU_H
#define UI_DLG_BOOKAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_bookAU
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *le_author;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_number;
    QLabel *label;
    QLineEdit *le_category1;
    QLineEdit *le_price;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_no;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLineEdit *le_category2;
    QLineEdit *le_name;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *le_aviNum;
    QLineEdit *le_place;

    void setupUi(QDialog *Dlg_bookAU)
    {
        if (Dlg_bookAU->objectName().isEmpty())
            Dlg_bookAU->setObjectName(QString::fromUtf8("Dlg_bookAU"));
        Dlg_bookAU->resize(477, 368);
        gridLayout_2 = new QGridLayout(Dlg_bookAU);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        le_author = new QLineEdit(Dlg_bookAU);
        le_author->setObjectName(QString::fromUtf8("le_author"));

        gridLayout_2->addWidget(le_author, 1, 2, 1, 1);

        label_8 = new QLabel(Dlg_bookAU);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        label_5 = new QLabel(Dlg_bookAU);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(Dlg_bookAU);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        le_number = new QLineEdit(Dlg_bookAU);
        le_number->setObjectName(QString::fromUtf8("le_number"));

        gridLayout_2->addWidget(le_number, 5, 2, 1, 1);

        label = new QLabel(Dlg_bookAU);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_category1 = new QLineEdit(Dlg_bookAU);
        le_category1->setObjectName(QString::fromUtf8("le_category1"));

        gridLayout_2->addWidget(le_category1, 2, 2, 1, 1);

        le_price = new QLineEdit(Dlg_bookAU);
        le_price->setObjectName(QString::fromUtf8("le_price"));

        gridLayout_2->addWidget(le_price, 4, 2, 1, 1);

        widget = new QWidget(Dlg_bookAU);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_no = new QPushButton(widget);
        btn_no->setObjectName(QString::fromUtf8("btn_no"));

        gridLayout->addWidget(btn_no, 0, 2, 1, 1);

        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        gridLayout->addWidget(btn_ok, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 9, 0, 1, 3);

        label_3 = new QLabel(Dlg_bookAU);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);

        le_category2 = new QLineEdit(Dlg_bookAU);
        le_category2->setObjectName(QString::fromUtf8("le_category2"));

        gridLayout_2->addWidget(le_category2, 3, 2, 1, 1);

        le_name = new QLineEdit(Dlg_bookAU);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout_2->addWidget(le_name, 0, 2, 1, 1);

        label_7 = new QLabel(Dlg_bookAU);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        label_4 = new QLabel(Dlg_bookAU);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(Dlg_bookAU);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_aviNum = new QLineEdit(Dlg_bookAU);
        le_aviNum->setObjectName(QString::fromUtf8("le_aviNum"));

        gridLayout_2->addWidget(le_aviNum, 6, 2, 1, 1);

        le_place = new QLineEdit(Dlg_bookAU);
        le_place->setObjectName(QString::fromUtf8("le_place"));

        gridLayout_2->addWidget(le_place, 7, 2, 1, 1);


        retranslateUi(Dlg_bookAU);

        QMetaObject::connectSlotsByName(Dlg_bookAU);
    } // setupUi

    void retranslateUi(QDialog *Dlg_bookAU)
    {
        Dlg_bookAU->setWindowTitle(QCoreApplication::translate("Dlg_bookAU", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("Dlg_bookAU", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_bookAU", "\344\273\267       \346\240\274", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_bookAU", "\346\200\273  \346\225\260  \351\207\217", nullptr));
        label->setText(QCoreApplication::translate("Dlg_bookAU", "\345\220\215       \347\247\260", nullptr));
        btn_no->setText(QCoreApplication::translate("Dlg_bookAU", "\345\217\226\346\266\210", nullptr));
        btn_ok->setText(QCoreApplication::translate("Dlg_bookAU", "\347\241\256\345\256\232", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_bookAU", "\344\271\246\347\261\215\345\244\247\347\261\273", nullptr));
        label_7->setText(QCoreApplication::translate("Dlg_bookAU", "\345\217\257\345\200\237\346\225\260\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_bookAU", "\345\205\267\344\275\223\345\260\217\347\261\273", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_bookAU", "\344\275\234       \350\200\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_bookAU: public Ui_Dlg_bookAU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BOOKAU_H
