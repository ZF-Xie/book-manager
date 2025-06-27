#include "cell_usermgr.h"
#include "ui_cell_usermgr.h"

Cell_UserMgr::Cell_UserMgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_UserMgr)
{
    ui->setupUi(this);
}

Cell_UserMgr::~Cell_UserMgr()
{
    delete ui;
}
