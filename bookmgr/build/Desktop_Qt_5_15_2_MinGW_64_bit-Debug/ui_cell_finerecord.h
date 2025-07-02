/********************************************************************************
** Form generated from reading UI file 'cell_finerecord.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_FINERECORD_H
#define UI_CELL_FINERECORD_H

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

class Ui_Cell_fineRecord
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *btu_del;
    QLineEdit *le_search;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *Cell_fineRecord)
    {
        if (Cell_fineRecord->objectName().isEmpty())
            Cell_fineRecord->setObjectName(QString::fromUtf8("Cell_fineRecord"));
        Cell_fineRecord->resize(785, 661);
        gridLayout_2 = new QGridLayout(Cell_fineRecord);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(Cell_fineRecord);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        widget_2 = new QWidget(Cell_fineRecord);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btu_del = new QPushButton(widget_2);
        btu_del->setObjectName(QString::fromUtf8("btu_del"));

        gridLayout->addWidget(btu_del, 0, 0, 1, 1);

        le_search = new QLineEdit(widget_2);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        tableView = new QTableView(Cell_fineRecord);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_fineRecord);

        QMetaObject::connectSlotsByName(Cell_fineRecord);
    } // setupUi

    void retranslateUi(QWidget *Cell_fineRecord)
    {
        Cell_fineRecord->setWindowTitle(QCoreApplication::translate("Cell_fineRecord", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_fineRecord", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242\347\275\232\346\254\276\346\237\245\350\257\242", nullptr));
        btu_del->setText(QCoreApplication::translate("Cell_fineRecord", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Cell_fineRecord", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_fineRecord: public Ui_Cell_fineRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_FINERECORD_H
