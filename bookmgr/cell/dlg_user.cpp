#include "dlg_user.h"
#include "ui_dlg_user.h"
#include<QPushButton>
#include<QtDebug>
#include"cell_bookhis.h"
dlg_user::dlg_user(int _user_id, QWidget *parent)
    : QDialog(parent)
    , user_id(_user_id)
    ,ui(new Ui::dlg_user)
    ,m_hisPage(nullptr)
    ,m_notePage(nullptr)
    ,m_listPage(nullptr)
{
    ui->setupUi(this);
    initpage();
}

dlg_user::~dlg_user()
{
    delete ui;
}

void dlg_user::initpage()
{
    m_hisPage=new cell_bookhis(this);
    m_notePage =new cell_booknote(this);
    m_listPage =new Cell_booklist(this);
    m_listPage->user_id = this->user_id;
    m_notePage->user_id = this->user_id;
    m_hisPage->user_id = this->user_id;
    ui->stackedWidget->addWidget(m_listPage);
    ui->stackedWidget->addWidget(m_hisPage);
    ui->stackedWidget->addWidget(m_notePage);
    ui->stackedWidget->setCurrentIndex(0);
    auto l=ui->tool->children();
    for(auto it:l){
        if(it->objectName().contains("btn")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&dlg_user::dealMenu);

        }
    }

}
void dlg_user::dealMenu(){

    qDebug()<<sender()->objectName();
    auto str=sender()->objectName();
    do{
        if("btn_bookhis"==str){
            ui->stackedWidget->setCurrentIndex(1);
            m_hisPage->initPage();
            break;

        }
        if("btn_booknote"==str){
            ui->stackedWidget->setCurrentIndex(2);
            m_notePage->initpage();
            break;
        }
        if("btn_booklist"==str){
            ui->stackedWidget->setCurrentIndex(0);
            m_listPage->initpage();
            break;

        }

    }while(false);

}






void dlg_user::on_btn_returndlg_clicked()
{
    setResult(-3);
    hide();
}

