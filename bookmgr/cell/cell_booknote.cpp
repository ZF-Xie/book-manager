#include "cell_booknote.h"
#include "ui_cell_booknote.h"

cell_booknote::cell_booknote(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_booknote)
{
    ui->setupUi(this);
}

cell_booknote::~cell_booknote()
{
    delete ui;
}
