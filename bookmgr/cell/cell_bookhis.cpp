#include "cell_bookhis.h"
#include "ui_cell_bookhis.h"

cell_bookhis::cell_bookhis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_bookhis)
{
    ui->setupUi(this);
}

cell_bookhis::~cell_bookhis()
{
    delete ui;
}
