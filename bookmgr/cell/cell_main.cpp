#include "cell_main.h"
#include "ui_cell_main.h"
#include<QPushButton>
#include<QtDebug>
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
}

void Cell_Main::dealMenu()
{
    auto str = qDebug() << sender()->objectName();

    do
    {
        if ("btn_user"==str)
        {
            ui->stackedWidget->setCurrentIndex(0);
            break:
        }

        if ("btn_book" == str)
        {
            ui->stackedWidget->setCurrentIndex(1);
            break:
        }

        if ("btn_his" == str)
        {
            ui->stackedWidget->setCurrentIndex(2);
            break:
        }

        if ("toolButton" == str)
        {
            ui->stackedWidget->setCurrentIndex(3);
            break:
        }

        if ("toolButton_2" == str)
        {
            ui->stackedWidget->setCurrentIndex(4);
            break:
        }
    }while(false)
}
