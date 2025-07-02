#include "win_viewnote.h"
#include "ui_win_viewnote.h"

win_viewnote::win_viewnote(QString content1, QString content2, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::win_viewnote)
{
    ui->setupUi(this);
    ui->textEdit_2->setText(content1);
    ui->textEdit->setText(content2);
}

win_viewnote::~win_viewnote()
{
    delete ui;
}

void win_viewnote::on_pushButton_clicked()
{
    hide();
}
