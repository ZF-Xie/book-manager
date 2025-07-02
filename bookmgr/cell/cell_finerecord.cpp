#include "cell_finerecord.h"
#include "ui_cell_finerecord.h"

Cell_fineRecord::Cell_fineRecord(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_fineRecord)
{
    ui->setupUi(this);
}

Cell_fineRecord::~Cell_fineRecord()
{
    delete ui;
}

void Cell_fineRecord::on_btu_del_clicked()
{

}

