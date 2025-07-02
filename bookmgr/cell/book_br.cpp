#include "book_br.h"
#include "ui_book_br.h"
#include <lib/sqluserdata.h>

book_br::book_br(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::book_br)
{
    ui->setupUi(this);
}

void book_br::setbookid(int id)
{
    m_bookid=id;
}

book_br::~book_br()
{
    delete ui;
}
  //giao:::::bool ret =QMessageBox::Yes;
/*void book_br::on_btn_bor_clicked()
{
    do{
        auto strName=ui->le_username->text();
        auto strPass=ui->le_passw->text();

        //auto ret =Cell_Main::getInstance()->login_event();

        if(!ret){

            this->done(0);
            break;
        }

        Sqluserdata::getInstance()->borrowbook( QString::number(user_id),m_bookid);
        this->done(1);
    }while(false);
    //判断用户名密码正确

}
*/



void book_br::on_btn_cancel_clicked()
{
    this->done(0);
}

