#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"

Cell_Bookmgr::Cell_Bookmgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Bookmgr)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Bookmgr::~Cell_Bookmgr()
{
    delete ui;
}
