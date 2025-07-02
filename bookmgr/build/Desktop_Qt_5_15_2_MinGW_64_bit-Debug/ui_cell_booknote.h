/********************************************************************************
** Form generated from reading UI file 'cell_booknote.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOKNOTE_H
#define UI_CELL_BOOKNOTE_H

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

class Ui_cell_booknote
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *cell_booknote)
    {
        if (cell_booknote->objectName().isEmpty())
            cell_booknote->setObjectName(QString::fromUtf8("cell_booknote"));
        cell_booknote->resize(571, 446);
        gridLayout = new QGridLayout(cell_booknote);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(cell_booknote);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(cell_booknote);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(cell_booknote);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(cell_booknote);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(283, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        tableView = new QTableView(cell_booknote);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 4);


        retranslateUi(cell_booknote);

        QMetaObject::connectSlotsByName(cell_booknote);
    } // setupUi

    void retranslateUi(QWidget *cell_booknote)
    {
        cell_booknote->setWindowTitle(QCoreApplication::translate("cell_booknote", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("cell_booknote", "Qt\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\347\225\231\350\250\200", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("cell_booknote", "\347\241\256\350\256\244\347\225\231\350\250\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cell_booknote: public Ui_cell_booknote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOKNOTE_H
