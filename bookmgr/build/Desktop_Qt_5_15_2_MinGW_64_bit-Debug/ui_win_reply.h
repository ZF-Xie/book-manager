/********************************************************************************
** Form generated from reading UI file 'win_reply.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_REPLY_H
#define UI_WIN_REPLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win_reply
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QLabel *label_3;

    void setupUi(QWidget *win_reply)
    {
        if (win_reply->objectName().isEmpty())
            win_reply->setObjectName(QString::fromUtf8("win_reply"));
        win_reply->resize(660, 511);
        win_reply->setStyleSheet(QString::fromUtf8("QLabel#label, QLabel#label_3{font:25px'\351\273\221\344\275\223';}\n"
"QTextEdit{border-radius:2px;min-height:48px; border:1px solid black; font:20px}\n"
"QPushButton{border-radius:6px;background:#409eff;color:white;font-size:23px}\n"
"QWidget#bg{background:white;}"));
        gridLayout = new QGridLayout(win_reply);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(win_reply);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(100, 0));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 25));

        gridLayout_3->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 25));

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 3, 0, 1, 4);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(400, 150));

        gridLayout_2->addWidget(textEdit_2, 1, 2, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(400, 150));

        gridLayout_2->addWidget(textEdit, 2, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(win_reply);

        QMetaObject::connectSlotsByName(win_reply);
    } // setupUi

    void retranslateUi(QWidget *win_reply)
    {
        win_reply->setWindowTitle(QCoreApplication::translate("win_reply", "Form", nullptr));
        label->setText(QCoreApplication::translate("win_reply", "\347\225\231\350\250\200\345\206\205\345\256\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("win_reply", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QCoreApplication::translate("win_reply", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("win_reply", "\345\233\236\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win_reply: public Ui_win_reply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_REPLY_H
