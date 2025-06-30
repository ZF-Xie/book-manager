#include "dlg_login.h"
#include "ui_dlg_login.h"
#include "lib/sql_login.h"
#include <QMessageBox>
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

void Dlg_Login::hide_event()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    hide();
}

void Dlg_Login::on_btn_login_clicked()
{
    auto strName = ui->lineEdit->text();
    auto strPass = ui->lineEdit_2->text();
    auto ret = sql_login::getInstance()->Login(strName, strPass);
    qDebug()<<ret;
    if(ret == "")
    {
        QMessageBox::critical(this, "登录失败", "用户不存在", QMessageBox::Ok);
        ui->lineEdit_2->clear();
        return;
    }
    if(ret[0] == ' ')
    {
        QMessageBox::critical(this, "登录失败", "密码错误", QMessageBox::Ok);
        ui->lineEdit_2->clear();
        return;
    }
    bool role = sql_login::getInstance()->Judge_role(strName);
    if(role)
    {
        int res = sql_login::getInstance()->Get_id(strName);
        setResult(res);
    }
    else
    {
        setResult(-4);
    }
    hide_event();
}
void Dlg_Login::on_btn_exit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认退出", "确定要退出应用程序吗？",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        setResult(-1);
        hide_event();
    }
}

void Dlg_Login::on_btn_register_clicked()
{
    setResult(-2);
    hide_event();
}

