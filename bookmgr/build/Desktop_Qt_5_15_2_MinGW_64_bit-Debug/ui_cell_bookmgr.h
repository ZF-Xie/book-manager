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
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_search;
    QPushButton *btu_update;
    QPushButton *btu_del;
    QPushButton *btn_add;
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
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 4, 1, 1);

        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 0, 3, 1, 1);

        btu_update = new QPushButton(widget);
        btu_update->setObjectName(QString::fromUtf8("btu_update"));

        gridLayout->addWidget(btu_update, 0, 1, 1, 1);

        btu_del = new QPushButton(widget);
        btu_del->setObjectName(QString::fromUtf8("btu_del"));

        gridLayout->addWidget(btu_del, 0, 2, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout->addWidget(btn_add, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_Bookmgr);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        label_2 = new QLabel(Cell_Bookmgr);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        retranslateUi(Cell_Bookmgr);

        QMetaObject::connectSlotsByName(Cell_Bookmgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_Bookmgr)
    {
        Cell_Bookmgr->setWindowTitle(QCoreApplication::translate("Cell_Bookmgr", "Form", nullptr));
        label->setText(QCoreApplication::translate("Cell_Bookmgr", "\346\220\234\347\264\242", nullptr));
        btu_update->setText(QCoreApplication::translate("Cell_Bookmgr", "\344\277\256\346\224\271", nullptr));
        btu_del->setText(QCoreApplication::translate("Cell_Bookmgr", "\345\210\240\351\231\244", nullptr));
        btn_add->setText(QCoreApplication::translate("Cell_Bookmgr", "\345\242\236\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_Bookmgr", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Bookmgr: public Ui_Cell_Bookmgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKMGR_H
