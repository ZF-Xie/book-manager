/********************************************************************************
** Form generated from reading UI file 'cell_booklist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOKLIST_H
#define UI_CELL_BOOKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_booklist
{
public:
    QGridLayout *gridLayout;
    QLineEdit *le_search;
    QPushButton *pushButton_2;
    QSpacerItem *spacer;
    QLabel *label_2;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *Cell_booklist)
    {
        if (Cell_booklist->objectName().isEmpty())
            Cell_booklist->setObjectName(QString::fromUtf8("Cell_booklist"));
        Cell_booklist->resize(495, 380);
        gridLayout = new QGridLayout(Cell_booklist);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_search = new QLineEdit(Cell_booklist);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(Cell_booklist);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        spacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 1, 3, 1, 1);

        label_2 = new QLabel(Cell_booklist);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(Cell_booklist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableView = new QTableView(Cell_booklist);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 5, 0, 1, 4);


        retranslateUi(Cell_booklist);

        QMetaObject::connectSlotsByName(Cell_booklist);
    } // setupUi

    void retranslateUi(QWidget *Cell_booklist)
    {
        Cell_booklist->setWindowTitle(QCoreApplication::translate("Cell_booklist", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cell_booklist", "\345\200\237\351\230\205\345\233\276\344\271\246", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_booklist", "Qt\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\345\233\276\344\271\246\346\237\245\347\234\213", nullptr));
        label->setText(QCoreApplication::translate("Cell_booklist", "\345\233\276\344\271\246\346\243\200\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_booklist: public Ui_Cell_booklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKLIST_H
