/********************************************************************************
** Form generated from reading UI file 'cell_administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_ADMINISTRATOR_H
#define UI_CELL_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName(QString::fromUtf8("Cell_Main"));
        Cell_Main->resize(800, 600);
        centralwidget = new QWidget(Cell_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Cell_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cell_Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Cell_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Cell_Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cell_Main->setStatusBar(statusbar);

        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_Main)
    {
        Cell_Main->setWindowTitle(QCoreApplication::translate("Cell_Main", "Cell_Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_ADMINISTRATOR_H
