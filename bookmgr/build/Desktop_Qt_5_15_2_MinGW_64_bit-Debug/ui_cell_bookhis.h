/********************************************************************************
** Form generated from reading UI file 'cell_bookhis.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOKHIS_H
#define UI_CELL_BOOKHIS_H

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

class Ui_cell_bookhis
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *le_search;
    QPushButton *btn_return;
    QTableView *tableView;

    void setupUi(QWidget *cell_bookhis)
    {
        if (cell_bookhis->objectName().isEmpty())
            cell_bookhis->setObjectName(QString::fromUtf8("cell_bookhis"));
        cell_bookhis->resize(618, 525);
        gridLayout = new QGridLayout(cell_bookhis);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(cell_bookhis);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(cell_bookhis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        le_search = new QLineEdit(cell_bookhis);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 1, 1, 1, 1);

        btn_return = new QPushButton(cell_bookhis);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        gridLayout->addWidget(btn_return, 1, 2, 1, 1);

        tableView = new QTableView(cell_bookhis);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 4);


        retranslateUi(cell_bookhis);

        QMetaObject::connectSlotsByName(cell_bookhis);
    } // setupUi

    void retranslateUi(QWidget *cell_bookhis)
    {
        cell_bookhis->setWindowTitle(QCoreApplication::translate("cell_bookhis", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("cell_bookhis", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("cell_bookhis", "\346\220\234\347\264\242", nullptr));
        btn_return->setText(QCoreApplication::translate("cell_bookhis", "\345\275\222\350\277\230\345\233\276\344\271\246", nullptr));
        btn_return->setProperty("name", QVariant(QCoreApplication::translate("cell_bookhis", "btn", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class cell_bookhis: public Ui_cell_bookhis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKHIS_H
