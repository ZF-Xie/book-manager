/********************************************************************************
** Form generated from reading UI file 'cell_bookmgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOKMGR_H
#define UI_CELL_BOOKMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Bookmgr
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QWidget *Cell_Bookmgr)
    {
        if (Cell_Bookmgr->objectName().isEmpty())
            Cell_Bookmgr->setObjectName(QString::fromUtf8("Cell_Bookmgr"));
        Cell_Bookmgr->resize(683, 542);
        gridLayout_2 = new QGridLayout(Cell_Bookmgr);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Cell_Bookmgr);
        widget->setObjectName(QString::fromUtf8("widget"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 9, 80, 24));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(95, 9, 80, 24));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(360, 10, 108, 23));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(632, 9, 24, 16));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(181, 9, 80, 24));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 10, 80, 24));

        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_Bookmgr);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        label_2 = new QLabel(Cell_Bookmgr);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        retranslateUi(Cell_Bookmgr);

        QMetaObject::connectSlotsByName(Cell_Bookmgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_Bookmgr)
    {
        Cell_Bookmgr->setWindowTitle(QCoreApplication::translate("Cell_Bookmgr", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Cell_Bookmgr", "\345\242\236\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cell_Bookmgr", "\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("Cell_Bookmgr", "\346\220\234\347\264\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Cell_Bookmgr", "\345\210\240\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Cell_Bookmgr", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_Bookmgr", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Bookmgr: public Ui_Cell_Bookmgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKMGR_H
