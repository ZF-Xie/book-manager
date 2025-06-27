#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"

Cell_Bookmgr::Cell_Bookmgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Bookmgr)
{
    ui->setupUi(this);
}

Cell_Bookmgr::~Cell_Bookmgr()
{
    delete ui;
}
