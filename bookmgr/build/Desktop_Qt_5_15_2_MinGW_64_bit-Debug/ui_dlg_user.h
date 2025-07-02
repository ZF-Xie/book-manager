/********************************************************************************
** Form generated from reading UI file 'dlg_user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_USER_H
#define UI_DLG_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_user
{
public:
    QGridLayout *gridLayout;
    QWidget *tool;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btn_booklist;
    QToolButton *btn_bookhis;
    QToolButton *btn_booknote;
    QToolButton *btn_finelist;
    QSpacerItem *verticalSpacer_2;
    QToolButton *btn_returndlg;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *dlg_user)
    {
        if (dlg_user->objectName().isEmpty())
            dlg_user->setObjectName(QString::fromUtf8("dlg_user"));
        dlg_user->resize(1208, 630);
        dlg_user->setStyleSheet(QString::fromUtf8("QWidget#tool QToolButton{border:none;background-color:rgb(84,92,100);color:white;min-height:55px;font:14px \"\351\273\221\344\275\223\";padding-left:12px;}\n"
"QWidget#tool QToolButton:checked{background-color:rgb(67,74,80);}\n"
"QWidget#tool{background-color:rgb(84,92,100);}\n"
"QStackedWidget#centralwidget{background-color:color;}"));
        gridLayout = new QGridLayout(dlg_user);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tool = new QWidget(dlg_user);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(120, 0));
        tool->setMaximumSize(QSize(120, 16777215));
        verticalLayout_2 = new QVBoxLayout(tool);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_booklist = new QToolButton(tool);
        buttonGroup = new QButtonGroup(dlg_user);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(btn_booklist);
        btn_booklist->setObjectName(QString::fromUtf8("btn_booklist"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_booklist->sizePolicy().hasHeightForWidth());
        btn_booklist->setSizePolicy(sizePolicy);
        btn_booklist->setMaximumSize(QSize(120, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tool.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_booklist->setIcon(icon);
        btn_booklist->setCheckable(true);
        btn_booklist->setChecked(true);
        btn_booklist->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btn_booklist);

        btn_bookhis = new QToolButton(tool);
        buttonGroup->addButton(btn_bookhis);
        btn_bookhis->setObjectName(QString::fromUtf8("btn_bookhis"));
        sizePolicy.setHeightForWidth(btn_bookhis->sizePolicy().hasHeightForWidth());
        btn_bookhis->setSizePolicy(sizePolicy);
        btn_bookhis->setMaximumSize(QSize(120, 16777215));
        btn_bookhis->setIcon(icon);
        btn_bookhis->setCheckable(true);
        btn_bookhis->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btn_bookhis);

        btn_booknote = new QToolButton(tool);
        buttonGroup->addButton(btn_booknote);
        btn_booknote->setObjectName(QString::fromUtf8("btn_booknote"));
        sizePolicy.setHeightForWidth(btn_booknote->sizePolicy().hasHeightForWidth());
        btn_booknote->setSizePolicy(sizePolicy);
        btn_booknote->setMaximumSize(QSize(120, 16777215));
        btn_booknote->setIcon(icon);
        btn_booknote->setCheckable(true);
        btn_booknote->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btn_booknote);

        btn_finelist = new QToolButton(tool);
        buttonGroup->addButton(btn_finelist);
        btn_finelist->setObjectName(QString::fromUtf8("btn_finelist"));
        sizePolicy.setHeightForWidth(btn_finelist->sizePolicy().hasHeightForWidth());
        btn_finelist->setSizePolicy(sizePolicy);
        btn_finelist->setMaximumSize(QSize(120, 16777215));
        btn_finelist->setIcon(icon);
        btn_finelist->setCheckable(true);
        btn_finelist->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btn_finelist);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btn_returndlg = new QToolButton(tool);
        buttonGroup->addButton(btn_returndlg);
        btn_returndlg->setObjectName(QString::fromUtf8("btn_returndlg"));

        verticalLayout_2->addWidget(btn_returndlg);


        gridLayout->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(dlg_user);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(1677215, 16777215));

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(dlg_user);

        QMetaObject::connectSlotsByName(dlg_user);
    } // setupUi

    void retranslateUi(QDialog *dlg_user)
    {
        dlg_user->setWindowTitle(QCoreApplication::translate("dlg_user", "Dialog", nullptr));
        btn_booklist->setText(QCoreApplication::translate("dlg_user", " \345\233\276\344\271\246\346\237\245\347\234\213", nullptr));
        btn_bookhis->setText(QCoreApplication::translate("dlg_user", " \345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        btn_booknote->setText(QCoreApplication::translate("dlg_user", "   \347\225\231\350\250\200", nullptr));
        btn_finelist->setText(QCoreApplication::translate("dlg_user", " \347\275\232\346\254\276\346\237\245\350\257\242", nullptr));
        btn_returndlg->setText(QCoreApplication::translate("dlg_user", "  \350\277\224\345\233\236\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_user: public Ui_dlg_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_USER_H
