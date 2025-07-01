#include "cell_main.h"
#include "ui_cell_main.h"
#include<QPushButton>
#include<QtDebug>
#include <QMessageBox>
Cell_Main::Cell_Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cell_Main)
    ,m_userPage(nullptr)
    ,m_bookPage(nullptr)
    ,m_recordPage(nullptr)
    ,m_replyPage(nullptr)
{
    ui->setupUi(this);
    initPage();
}

Cell_Main::~Cell_Main()
{
    delete ui;
}

void Cell_Main::initPage()
{
    m_userPage=new Cell_UserMgr(this);
    m_bookPage=new Cell_Bookmgr(this);
    m_recordPage=new Cell_Record(this);
    m_replyPage=new Cell_Reply(this);
    ui->stackedWidget->addWidget(m_userPage);
    ui->stackedWidget->addWidget(m_bookPage);
    ui->stackedWidget->addWidget(m_recordPage);
    ui->stackedWidget->addWidget(m_replyPage);
    ui->stackedWidget->setCurrentIndex(0);
    
    auto l = ui->tool->children();
    for (auto it : l)
    {
        if (it->objectName().contains("btn"))
        {
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&Cell_Main::dealMenu);
        }
    }
    m_userPage->initPage();

}

void Cell_Main::dealMenu()
{
    auto str = sender()->objectName();

    do
    {
        if ("btn_user"==str)
        {
            m_userPage->initPage();
            ui->stackedWidget->setCurrentIndex(0);
            break;
        }

        if ("btn_book" == str)
        {
            m_bookPage->initPage();
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }

        if ("btn_his" == str)
        {
            m_recordPage->initPage();
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }

        if ("btn_reply" == str)
        {
            m_replyPage->initpage();
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }

        if ("toolButton_2" == str)
        {
            ui->stackedWidget->setCurrentIndex(4);
            break;
        }
    }while(false);
}

void Cell_Main::on_toolButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认退出", "确定要退出应用程序吗？",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        exit(0);
    }
}

