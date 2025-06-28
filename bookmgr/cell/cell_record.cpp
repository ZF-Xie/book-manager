#include "cell_record.h"
#include "ui_cell_record.h"

Cell_Record::Cell_Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Record)
{
    ui->setupUi(this);
}

Cell_Record::~Cell_Record()
{
    delete ui;
}
