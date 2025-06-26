#include "dlg_login.h"
#include "ui_dlg_login.h"
#include "lib/sql_login.h"

Dlg_Login::Dlg_Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_Login)
{
    ui->setupUi(this);
}

Dlg_Login::~Dlg_Login()
{
    delete ui;
}

void Dlg_Login::on_btn_login_clicked()
{
    auto strName = ui->lineEdit->text();
    auto strPass = ui->lineEdit_2->text();
    auto ret = sql_login::getInstance()->Login(strName, strPass);
    qDebug()<<ret;
    if(ret == ""){
        setResult(1);
        return;
    }
    bool role = sql_login::getInstance()->Judge_role(strName);
    if(role)
    {
        setResult(2);
    }
    else
    {
        setResult(3);
    }
    hide();
}
void Dlg_Login::on_btn_exit_clicked()
{
    setResult(4);
    hide();
}

void Dlg_Login::on_btn_register_clicked()
{
    setResult(5);
    hide();
}

