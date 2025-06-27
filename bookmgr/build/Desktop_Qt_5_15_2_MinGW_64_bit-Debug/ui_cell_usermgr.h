/********************************************************************************
** Form generated from reading UI file 'cell_usermgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_USERMGR_H
#define UI_CELL_USERMGR_H

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

class Ui_Cell_UserMgr
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QWidget *Cell_UserMgr)
    {
        if (Cell_UserMgr->objectName().isEmpty())
            Cell_UserMgr->setObjectName(QString::fromUtf8("Cell_UserMgr"));
        Cell_UserMgr->resize(668, 519);
        gridLayout = new QGridLayout(Cell_UserMgr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(Cell_UserMgr);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 4, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(Cell_UserMgr);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(Cell_UserMgr);

        QMetaObject::connectSlotsByName(Cell_UserMgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_UserMgr)
    {
        Cell_UserMgr->setWindowTitle(QCoreApplication::translate("Cell_UserMgr", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cell_UserMgr", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        label->setText(QCoreApplication::translate("Cell_UserMgr", "\346\220\234\347\264\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Cell_UserMgr", "\347\224\250\346\210\267\345\257\274\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_UserMgr", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Cell_UserMgr", "\345\233\276\344\271\246\345\275\222\350\277\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_UserMgr: public Ui_Cell_UserMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_USERMGR_H
