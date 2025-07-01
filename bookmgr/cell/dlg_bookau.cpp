#include "dlg_bookau.h"
#include "ui_dlg_bookau.h"
#include "lib/sqlmgr.h"
Dlg_bookAU::Dlg_bookAU(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_bookAU)
{
    ui->setupUi(this);
}

Dlg_bookAU::Dlg_bookAU(QStringList l,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_bookAU)
{
    ui->setupUi(this);
    ui->le_name->setText(l[1]);
    ui->le_author->setText(l[2]);
    ui->le_category1->setText(l[3]);
    ui->le_category2->setText(l[4]);
    ui->le_price->setText(l[5]);
    ui->le_number->setText(l[6]);
    ui->le_aviNum->setText(l[7]);
    ui->le_place->setText(l[8]);
}

Dlg_bookAU::~Dlg_bookAU()
{
    delete ui;
}

void Dlg_bookAU::setType(int id)
{
    m_id=id;

}


void Dlg_bookAU::on_btn_ok_clicked()
{
    QStringList l;
    l<<QString::number(m_id);
    l<<ui->le_name->text();
    l<<ui->le_author->text();
    l<<ui->le_category1->text();
    l<<ui->le_category2->text();
    l<<ui->le_price->text();
    l<<ui->le_number->text();
    l<<ui->le_aviNum->text();
    l<<ui->le_place->text();
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


void Dlg_bookAU::on_btn_no_clicked()
{
    this->hide();
}

