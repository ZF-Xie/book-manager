/********************************************************************************
** Form generated from reading UI file 'book_br.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_BR_H
#define UI_BOOK_BR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book_br
{
public:
    QLabel *label;
    QLineEdit *le_username;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *lb_name;
    QPushButton *btn_bor;
    QPushButton *btn_cancel;
    QLabel *label_2;
    QLineEdit *le_passw;

    void setupUi(QDialog *book_br)
    {
        if (book_br->objectName().isEmpty())
            book_br->setObjectName(QString::fromUtf8("book_br"));
        book_br->resize(488, 380);
        label = new QLabel(book_br);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 170, 71, 31));
        le_username = new QLineEdit(book_br);
        le_username->setObjectName(QString::fromUtf8("le_username"));
        le_username->setGeometry(QRect(150, 180, 121, 19));
        widget_2 = new QWidget(book_br);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(6, 6, 126, 31));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(book_br);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 89, 91, 41));
        lb_name = new QLabel(book_br);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setGeometry(QRect(150, 89, 131, 41));
        lb_name->setMaximumSize(QSize(16777215, 55));
        btn_bor = new QPushButton(book_br);
        btn_bor->setObjectName(QString::fromUtf8("btn_bor"));
        btn_bor->setGeometry(QRect(90, 310, 81, 18));
        btn_cancel = new QPushButton(book_br);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(270, 310, 81, 20));
        label_2 = new QLabel(book_br);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 229, 91, 41));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 100));
        le_passw = new QLineEdit(book_br);
        le_passw->setObjectName(QString::fromUtf8("le_passw"));
        le_passw->setGeometry(QRect(150, 240, 121, 19));

        retranslateUi(book_br);

        QMetaObject::connectSlotsByName(book_br);
    } // setupUi

    void retranslateUi(QDialog *book_br)
    {
        book_br->setWindowTitle(QCoreApplication::translate("book_br", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("book_br", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("book_br", "\345\233\276\344\271\246\345\220\215\347\247\260", nullptr));
        lb_name->setText(QCoreApplication::translate("book_br", "xxx", nullptr));
        btn_bor->setText(QCoreApplication::translate("book_br", "\345\200\237\351\230\205", nullptr));
        btn_cancel->setText(QCoreApplication::translate("book_br", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("book_br", " \345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book_br: public Ui_book_br {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_BR_H
