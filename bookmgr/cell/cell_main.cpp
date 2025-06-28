#include "cell_main.h"
#include "ui_cell_main.h"

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
}
