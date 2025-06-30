#include "dlg_register.h"
#include "ui_dlg_register.h"
#include "lib/sql_login.h"
#include <QMessageBox>

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

void dlg_register::hide_event()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    hide();
}

void dlg_register::on_btn_confirm_clicked()
{
    auto strName = ui->lineEdit->text();
    auto strPass = ui->lineEdit_2->text();
    auto strTname = ui->lineEdit_3->text();
    auto strPhone = ui->lineEdit_4->text();
    if(strName[0] == ' ')
    {
        QMessageBox::critical(this, "注册失败", "用户名不能以空格开头", QMessageBox::Ok);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        return;
    }
    auto ret = sql_login::getInstance()->Register(strName, strPass, strTname, strPhone);
    qDebug()<<ret;
    if(ret == 0)
    {
        QMessageBox::critical(this, "注册失败", "用户已存在", QMessageBox::Ok);
        return;
    }
    hide_event();
}

void dlg_register::on_btn_back_clicked()
{
    setResult(0);
    hide_event();
}

