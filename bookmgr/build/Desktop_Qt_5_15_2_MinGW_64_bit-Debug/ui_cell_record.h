/********************************************************************************
** Form generated from reading UI file 'cell_record.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_RECORD_H
#define UI_CELL_RECORD_H

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

class Ui_Cell_Record
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;

    void setupUi(QWidget *Cell_Record)
    {
        if (Cell_Record->objectName().isEmpty())
            Cell_Record->setObjectName(QString::fromUtf8("Cell_Record"));
        Cell_Record->resize(695, 542);
        gridLayout_2 = new QGridLayout(Cell_Record);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Cell_Record);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        label_2 = new QLabel(Cell_Record);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        tableView = new QTableView(Cell_Record);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_Record);

        QMetaObject::connectSlotsByName(Cell_Record);
    } // setupUi

    void retranslateUi(QWidget *Cell_Record)
    {
        Cell_Record->setWindowTitle(QCoreApplication::translate("Cell_Record", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cell_Record", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Cell_Record", "\346\220\234\347\264\242", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_Record", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Record: public Ui_Cell_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_RECORD_H
