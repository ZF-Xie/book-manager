/********************************************************************************
** Form generated from reading UI file 'cell_userfine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_USERFINE_H
#define UI_CELL_USERFINE_H

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

class Ui_cell_userfine
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *spacer;
    QLineEdit *le_search;
    QLabel *label;
    QPushButton *btu_del;
    QTableView *tableView;

    void setupUi(QWidget *cell_userfine)
    {
        if (cell_userfine->objectName().isEmpty())
            cell_userfine->setObjectName(QString::fromUtf8("cell_userfine"));
        cell_userfine->resize(733, 594);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cell_userfine->sizePolicy().hasHeightForWidth());
        cell_userfine->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(cell_userfine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(cell_userfine);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        widget_2 = new QWidget(cell_userfine);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 0, 5, 1, 1);

        le_search = new QLineEdit(widget_2);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 0, 2, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        btu_del = new QPushButton(widget_2);
        btu_del->setObjectName(QString::fromUtf8("btu_del"));

        gridLayout->addWidget(btu_del, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        tableView = new QTableView(cell_userfine);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(cell_userfine);

        QMetaObject::connectSlotsByName(cell_userfine);
    } // setupUi

    void retranslateUi(QWidget *cell_userfine)
    {
        cell_userfine->setWindowTitle(QCoreApplication::translate("cell_userfine", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("cell_userfine", "Qt\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237/\347\275\232\346\254\276\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("cell_userfine", "\346\220\234\347\264\242", nullptr));
        btu_del->setText(QCoreApplication::translate("cell_userfine", "\346\224\257\344\273\230\347\275\232\346\254\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cell_userfine: public Ui_cell_userfine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_USERFINE_H
