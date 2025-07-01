#include "dlg_userau.h"
#include "ui_dlg_userau.h"
#include "lib/sqlmgr.h"
dlg_userADD::dlg_userADD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_userADD)
{
    ui->setupUi(this);
}

dlg_userADD::~dlg_userADD()
{
    delete ui;
}

void dlg_userADD::setType(int id)
{
    m_id=id;
}

void dlg_userADD::on_btu_ok_clicked()
{
    QStringList l;
    l<<QString::number(m_id);
    l<<ui->le_name->text();
    l<<ui->le_phone->text();
    l<<ui->co_role->currentText();
    l<<ui->le_trueName->text();
    l<<ui->le_phone->text();
    l<<ui->co_sta->currentText();
    l<<"";
    if(-1!=m_id)
    {
        //update
        SqlMgr::getInstance()->UpdateBooks(l);
    }
    else
    {
        //add
        QVector<QStringList>vec;
        vec.push_back(l);
        SqlMgr::getInstance()->AddBooks(vec);
    }
    this->hide();
}


void dlg_userADD::on_btu_no_clicked()
{
    this->hide();
}

