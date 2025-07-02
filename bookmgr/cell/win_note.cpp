#include "win_note.h"
#include "ui_win_note.h"
#include"lib/sqluserdata.h"
win_note::win_note(int userid, QWidget *parent)
    : QDialog(parent)
    , user_id(userid)
    , ui(new Ui::win_note)
{
    ui->setupUi(this);
}

win_note::~win_note()
{
    delete ui;
}

void win_note::on_pushButton_2_clicked()
{
    hide();
}


void win_note::on_pushButton_clicked()
{
    auto content = ui->textEdit_2->toPlainText();
    Sqluserdata::getInstance()->addNote(user_id, content);
    hide();
}

