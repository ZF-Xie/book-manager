/********************************************************************************
** Form generated from reading UI file 'dlg_register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_REGISTER_H
#define UI_DLG_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_register
{
public:
    QGridLayout *gridLayout;
    QWidget *bg;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *btn_back;
    QPushButton *btn_confirm;
    QLineEdit *lineEdit_3;
    QLabel *lb_title;
    QLabel *lb_txt2;
    QLabel *lb_txt1;
    QLabel *lb_txt1_2;
    QLabel *lb_txt1_3;

    void setupUi(QDialog *dlg_register)
    {
        if (dlg_register->objectName().isEmpty())
            dlg_register->setObjectName(QString::fromUtf8("dlg_register"));
        dlg_register->resize(643, 454);
        dlg_register->setStyleSheet(QString::fromUtf8("QLabel#lb_title{font:38px'\351\273\221\344\275\223';}\n"
"QLabel#lb_txt1, QLabel#lb_txt2, QLabel#lb_txt1_2, QLabel#lb_txt1_3 {font:20px'\346\245\267\344\275\223';}\n"
"QLineEdit{border-radius:6px;min-height:48px;border:1px solid gray}\n"
"QPushButton{border-radius:6px;background:#409eff;color:white;font-size:20px}\n"
"QWidget#bg{background:white;}"));
        gridLayout = new QGridLayout(dlg_register);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg = new QWidget(dlg_register);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setMinimumSize(QSize(0, 48));
        gridLayout_2 = new QGridLayout(bg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit = new QLineEdit(bg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(lineEdit, 7, 2, 1, 1);

        lineEdit_2 = new QLineEdit(bg);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 50));
        lineEdit_2->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 8, 2, 1, 1);

        lineEdit_4 = new QLineEdit(bg);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 50));
        lineEdit_4->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 14, 2, 1, 1);

        widget = new QWidget(bg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setMinimumSize(QSize(0, 30));
        btn_back->setMaximumSize(QSize(16777215, 40));

        gridLayout_3->addWidget(btn_back, 0, 1, 1, 1);

        btn_confirm = new QPushButton(widget);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(btn_confirm, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 15, 0, 1, 4);

        lineEdit_3 = new QLineEdit(bg);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 50));
        lineEdit_3->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 10, 2, 1, 1);

        lb_title = new QLabel(bg);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));
        lb_title->setMaximumSize(QSize(16777215, 60));
        lb_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_title, 6, 2, 1, 1);

        lb_txt2 = new QLabel(bg);
        lb_txt2->setObjectName(QString::fromUtf8("lb_txt2"));
        lb_txt2->setMinimumSize(QSize(0, 0));
        lb_txt2->setMaximumSize(QSize(160, 50));
        lb_txt2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt2, 7, 1, 1, 1);

        lb_txt1 = new QLabel(bg);
        lb_txt1->setObjectName(QString::fromUtf8("lb_txt1"));
        lb_txt1->setMinimumSize(QSize(0, 0));
        lb_txt1->setMaximumSize(QSize(160, 50));
        lb_txt1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt1, 8, 1, 1, 1);

        lb_txt1_2 = new QLabel(bg);
        lb_txt1_2->setObjectName(QString::fromUtf8("lb_txt1_2"));
        lb_txt1_2->setMinimumSize(QSize(0, 0));
        lb_txt1_2->setMaximumSize(QSize(160, 50));
        lb_txt1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt1_2, 10, 1, 1, 1);

        lb_txt1_3 = new QLabel(bg);
        lb_txt1_3->setObjectName(QString::fromUtf8("lb_txt1_3"));
        lb_txt1_3->setMinimumSize(QSize(0, 0));
        lb_txt1_3->setMaximumSize(QSize(160, 50));
        lb_txt1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt1_3, 14, 1, 1, 1);


        gridLayout->addWidget(bg, 0, 0, 1, 1);


        retranslateUi(dlg_register);

        QMetaObject::connectSlotsByName(dlg_register);
    } // setupUi

    void retranslateUi(QDialog *dlg_register)
    {
        dlg_register->setWindowTitle(QCoreApplication::translate("dlg_register", "Dialog", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_4->setText(QString());
        btn_back->setText(QCoreApplication::translate("dlg_register", "\350\277\224\345\233\236", nullptr));
        btn_confirm->setText(QCoreApplication::translate("dlg_register", "\347\241\256\350\256\244", nullptr));
        lineEdit_3->setText(QString());
        lb_title->setText(QCoreApplication::translate("dlg_register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        lb_txt2->setText(QCoreApplication::translate("dlg_register", "\347\224\250\346\210\267\345\220\215", nullptr));
        lb_txt1->setText(QCoreApplication::translate("dlg_register", "\345\257\206  \347\240\201", nullptr));
        lb_txt1_2->setText(QCoreApplication::translate("dlg_register", "\345\247\223\345\220\215", nullptr));
        lb_txt1_3->setText(QCoreApplication::translate("dlg_register", "\347\224\265\350\257\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_register: public Ui_dlg_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_REGISTER_H
