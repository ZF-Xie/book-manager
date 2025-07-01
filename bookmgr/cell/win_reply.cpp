#include "win_reply.h"
#include "ui_win_reply.h"
#include"lib/sqlmgr.h"
win_reply::win_reply(int feedbackid, QString content, QDialog *parent)
    : QDialog(parent)
    , feedback_id(feedbackid)
    , ui(new Ui::win_reply)
{
    ui->setupUi(this);
    ui->textEdit_2->setText(content);
}

win_reply::~win_reply()
{
    delete ui;
}

void win_reply::on_pushButton_clicked()
{
    auto content = ui->textEdit->toPlainText();
    SqlMgr::getInstance()->replyNote(feedback_id, content);
    hide();
}

void win_reply::on_pushButton_2_clicked()
{
    hide();
}

