#include "cell_booknote.h"
#include "ui_cell_booknote.h"

#include <lib/sqluserdata.h>

cell_booknote::cell_booknote(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_booknote)
{
    ui->setupUi(this);
}

void cell_booknote::initpage(QString strCondition)
{


}

cell_booknote::~cell_booknote()
{
    delete ui;
}

void cell_booknote::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where name like '%%1%' or type1 like '%%1%' or type2 like '%%1%'").arg(arg1);
    initpage(strCond);
}

