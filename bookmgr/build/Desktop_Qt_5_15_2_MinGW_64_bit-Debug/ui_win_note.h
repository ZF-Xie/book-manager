/********************************************************************************
** Form generated from reading UI file 'win_note.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_NOTE_H
#define UI_WIN_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win_note
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *win_note)
    {
        if (win_note->objectName().isEmpty())
            win_note->setObjectName(QString::fromUtf8("win_note"));
        win_note->resize(662, 467);
        win_note->setStyleSheet(QString::fromUtf8("QLabel#label, QLabel#label_3{font:25px'\351\273\221\344\275\223';}\n"
"QTextEdit{border-radius:2px;min-height:48px; border:1px solid black; font:20px}\n"
"QPushButton{border-radius:6px;background:#409eff;color:white;font-size:23px}\n"
"QWidget#bg{background:white;}"));
        widget = new QWidget(win_note);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 660, 511));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(400, 300));

        gridLayout_2->addWidget(textEdit_2, 1, 2, 1, 1);

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


        gridLayout_2->addWidget(widget_2, 2, 0, 1, 4);


        retranslateUi(win_note);

        QMetaObject::connectSlotsByName(win_note);
    } // setupUi

    void retranslateUi(QDialog *win_note)
    {
        win_note->setWindowTitle(QCoreApplication::translate("win_note", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("win_note", "\347\225\231\350\250\200\345\206\205\345\256\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("win_note", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QCoreApplication::translate("win_note", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win_note: public Ui_win_note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_NOTE_H
