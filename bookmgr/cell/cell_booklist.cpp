#include "cell_booklist.h"
#include "ui_cell_booklist.h"

Cell_booklist::Cell_booklist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_booklist)
{
    ui->setupUi(this);
}

Cell_booklist::~Cell_booklist()
{
    delete ui;
}
