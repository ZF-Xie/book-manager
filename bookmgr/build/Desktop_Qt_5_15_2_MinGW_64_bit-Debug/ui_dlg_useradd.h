/********************************************************************************
** Form generated from reading UI file 'dlg_useradd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_USERADD_H
#define UI_DLG_USERADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_userADD
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_passNum;
    QLabel *label_3;
    QComboBox *co_role;
    QLabel *label_4;
    QLineEdit *le_trueName;
    QLabel *label_5;
    QLineEdit *le_phone;
    QLabel *label_6;
    QComboBox *co_sta;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btu_ok;
    QPushButton *btu_no;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *dlg_userADD)
    {
        if (dlg_userADD->objectName().isEmpty())
            dlg_userADD->setObjectName(QString::fromUtf8("dlg_userADD"));
        dlg_userADD->resize(477, 364);
        gridLayout_2 = new QGridLayout(dlg_userADD);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(dlg_userADD);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(dlg_userADD);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout_2->addWidget(le_name, 0, 1, 1, 1);

        label_2 = new QLabel(dlg_userADD);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_passNum = new QLineEdit(dlg_userADD);
        le_passNum->setObjectName(QString::fromUtf8("le_passNum"));

        gridLayout_2->addWidget(le_passNum, 1, 1, 1, 1);

        label_3 = new QLabel(dlg_userADD);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        co_role = new QComboBox(dlg_userADD);
        co_role->addItem(QString());
        co_role->addItem(QString());
        co_role->setObjectName(QString::fromUtf8("co_role"));

        gridLayout_2->addWidget(co_role, 2, 1, 1, 1);

        label_4 = new QLabel(dlg_userADD);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        le_trueName = new QLineEdit(dlg_userADD);
        le_trueName->setObjectName(QString::fromUtf8("le_trueName"));

        gridLayout_2->addWidget(le_trueName, 3, 1, 1, 1);

        label_5 = new QLabel(dlg_userADD);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        le_phone = new QLineEdit(dlg_userADD);
        le_phone->setObjectName(QString::fromUtf8("le_phone"));

        gridLayout_2->addWidget(le_phone, 4, 1, 1, 1);

        label_6 = new QLabel(dlg_userADD);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        co_sta = new QComboBox(dlg_userADD);
        co_sta->addItem(QString());
        co_sta->addItem(QString());
        co_sta->addItem(QString());
        co_sta->addItem(QString());
        co_sta->addItem(QString());
        co_sta->setObjectName(QString::fromUtf8("co_sta"));

        gridLayout_2->addWidget(co_sta, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        widget = new QWidget(dlg_userADD);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btu_ok = new QPushButton(widget);
        btu_ok->setObjectName(QString::fromUtf8("btu_ok"));

        gridLayout->addWidget(btu_ok, 0, 0, 1, 1);

        btu_no = new QPushButton(widget);
        btu_no->setObjectName(QString::fromUtf8("btu_no"));

        gridLayout->addWidget(btu_no, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 7, 0, 1, 2);


        retranslateUi(dlg_userADD);

        QMetaObject::connectSlotsByName(dlg_userADD);
    } // setupUi

    void retranslateUi(QDialog *dlg_userADD)
    {
        dlg_userADD->setWindowTitle(QCoreApplication::translate("dlg_userADD", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dlg_userADD", "\347\224\250 \346\210\267 \345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("dlg_userADD", "\345\257\206      \347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("dlg_userADD", "\346\235\203      \351\231\220", nullptr));
        co_role->setItemText(0, QCoreApplication::translate("dlg_userADD", "\347\224\250\346\210\267", nullptr));
        co_role->setItemText(1, QCoreApplication::translate("dlg_userADD", "\347\256\241\347\220\206\345\221\230", nullptr));

        label_4->setText(QCoreApplication::translate("dlg_userADD", "\347\234\237      \345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("dlg_userADD", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("dlg_userADD", "\344\277\241\347\224\250\347\212\266\346\200\201", nullptr));
        co_sta->setItemText(0, QCoreApplication::translate("dlg_userADD", "\350\211\257\345\245\275", nullptr));
        co_sta->setItemText(1, QCoreApplication::translate("dlg_userADD", "\345\255\230\345\234\250\344\271\246\347\261\215\351\200\276\346\234\237\345\275\222\350\277\230\345\216\206\345\217\262", nullptr));
        co_sta->setItemText(2, QCoreApplication::translate("dlg_userADD", "\345\255\230\345\234\250\344\271\246\347\261\215\344\270\242\345\244\261\345\216\206\345\217\262", nullptr));
        co_sta->setItemText(3, QCoreApplication::translate("dlg_userADD", "\345\255\230\345\234\250\344\271\246\347\261\215\351\200\276\346\234\237\344\270\224\344\270\242\345\244\261\345\216\206\345\217\262", nullptr));
        co_sta->setItemText(4, QString());

        btu_ok->setText(QCoreApplication::translate("dlg_userADD", "\347\241\256\345\256\232", nullptr));
        btu_no->setText(QCoreApplication::translate("dlg_userADD", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_userADD: public Ui_dlg_userADD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_USERADD_H
