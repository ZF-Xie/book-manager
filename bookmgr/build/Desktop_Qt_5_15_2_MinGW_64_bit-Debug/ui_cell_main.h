/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *tool;
    QGridLayout *gridLayout;
    QToolButton *toolButton_2;
    QToolButton *btn_fine;
    QToolButton *btn_user;
    QToolButton *btn_his;
    QToolButton *btn_reply;
    QToolButton *btn_book;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName(QString::fromUtf8("Cell_Main"));
        Cell_Main->resize(1186, 600);
        Cell_Main->setMinimumSize(QSize(200, 0));
        centralwidget = new QWidget(Cell_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#tool {background-color:rgb(84,92,100);}\n"
"QWidget#tool QToolButton{border:none;background:rgb(84,92,100);color:white;min-height:55px;font:18px\"\346\245\267\344\275\223\";padding-left:12px;}\n"
"QWidget#tool QToolButton:checked{border:none;background:rgb(67,74,80);}\n"
"QStackedWidget#stackedWidget{background-color:white;}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tool = new QWidget(centralwidget);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMaximumSize(QSize(200, 16777215));
        gridLayout = new QGridLayout(tool);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolButton_2 = new QToolButton(tool);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(toolButton_2, 6, 0, 1, 1);

        btn_fine = new QToolButton(tool);
        buttonGroup = new QButtonGroup(Cell_Main);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(btn_fine);
        btn_fine->setObjectName(QString::fromUtf8("btn_fine"));
        sizePolicy.setHeightForWidth(btn_fine->sizePolicy().hasHeightForWidth());
        btn_fine->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/tool.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_fine->setIcon(icon1);
        btn_fine->setCheckable(true);
        btn_fine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_fine, 4, 0, 1, 1);

        btn_user = new QToolButton(tool);
        buttonGroup->addButton(btn_user);
        btn_user->setObjectName(QString::fromUtf8("btn_user"));
        sizePolicy.setHeightForWidth(btn_user->sizePolicy().hasHeightForWidth());
        btn_user->setSizePolicy(sizePolicy);
        btn_user->setIcon(icon1);
        btn_user->setCheckable(true);
        btn_user->setChecked(true);
        btn_user->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_user, 0, 0, 1, 1);

        btn_his = new QToolButton(tool);
        buttonGroup->addButton(btn_his);
        btn_his->setObjectName(QString::fromUtf8("btn_his"));
        sizePolicy.setHeightForWidth(btn_his->sizePolicy().hasHeightForWidth());
        btn_his->setSizePolicy(sizePolicy);
        btn_his->setIcon(icon1);
        btn_his->setCheckable(true);
        btn_his->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_his, 2, 0, 1, 1);

        btn_reply = new QToolButton(tool);
        buttonGroup->addButton(btn_reply);
        btn_reply->setObjectName(QString::fromUtf8("btn_reply"));
        sizePolicy.setHeightForWidth(btn_reply->sizePolicy().hasHeightForWidth());
        btn_reply->setSizePolicy(sizePolicy);
        btn_reply->setIcon(icon1);
        btn_reply->setCheckable(true);
        btn_reply->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_reply, 3, 0, 1, 1);

        btn_book = new QToolButton(tool);
        buttonGroup->addButton(btn_book);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        btn_book->setIcon(icon1);
        btn_book->setCheckable(true);
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_book, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);


        gridLayout_2->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        Cell_Main->setCentralWidget(centralwidget);

        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_Main)
    {
        Cell_Main->setWindowTitle(QCoreApplication::translate("Cell_Main", "Cell_Main", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Cell_Main", "   \351\200\200\345\207\272", nullptr));
        btn_fine->setText(QCoreApplication::translate("Cell_Main", " \347\275\232\346\254\276\350\256\260\345\275\225", nullptr));
        btn_user->setText(QCoreApplication::translate("Cell_Main", " \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btn_his->setText(QCoreApplication::translate("Cell_Main", " \345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        btn_reply->setText(QCoreApplication::translate("Cell_Main", " \345\233\236\345\244\215\347\225\231\350\250\200", nullptr));
        btn_book->setText(QCoreApplication::translate("Cell_Main", " \345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
