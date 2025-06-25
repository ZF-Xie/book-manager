#include "dlg_register.h"
#include "ui_dlg_register.h"

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
    setResult(1);
    hide();
}



void dlg_register::on_btn_back_clicked()
{
    setResult(0);
    hide();
}

