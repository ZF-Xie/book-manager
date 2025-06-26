#include "dlg_register.h"
#include "ui_dlg_register.h"
#include "lib/sql_login.h"

dlg_register::dlg_register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_register)
{
    ui->setupUi(this);
}

dlg_register::~dlg_register()
{
    delete ui;
}

void dlg_register::on_btn_confirm_clicked()
{
    auto strName = ui->lineEdit->text();
    auto strPass = ui->lineEdit_2->text();
    auto ret = sql_login::getInstance()->Register(strName, strPass);
    qDebug()<<ret;
    if(ret == 0){
        setResult(1);
        return;
    }
    setResult(2);
    hide();
}



void dlg_register::on_btn_back_clicked()
{
    setResult(0);
    hide();
}

