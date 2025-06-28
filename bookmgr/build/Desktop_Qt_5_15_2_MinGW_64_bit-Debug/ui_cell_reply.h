/********************************************************************************
** Form generated from reading UI file 'cell_reply.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_REPLY_H
#define UI_CELL_REPLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Reply
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Cell_Reply)
    {
        if (Cell_Reply->objectName().isEmpty())
            Cell_Reply->setObjectName(QString::fromUtf8("Cell_Reply"));
        Cell_Reply->resize(695, 533);
        gridLayout_2 = new QGridLayout(Cell_Reply);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Cell_Reply);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(Cell_Reply);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableWidget = new QTableWidget(Cell_Reply);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);


        retranslateUi(Cell_Reply);

        QMetaObject::connectSlotsByName(Cell_Reply);
    } // setupUi

    void retranslateUi(QWidget *Cell_Reply)
    {
        Cell_Reply->setWindowTitle(QCoreApplication::translate("Cell_Reply", "Form", nullptr));
        label->setText(QCoreApplication::translate("Cell_Reply", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\347\225\231\350\250\200\345\233\236\345\244\215", nullptr));
        pushButton->setText(QCoreApplication::translate("Cell_Reply", "\346\217\220\344\272\244\345\233\236\345\244\215", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cell_Reply", "\345\210\240\351\231\244\347\225\231\350\250\200", nullptr));
        label_2->setText(QCoreApplication::translate("Cell_Reply", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Reply: public Ui_Cell_Reply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_REPLY_H
