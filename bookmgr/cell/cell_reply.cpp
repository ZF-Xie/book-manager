#include "cell_reply.h"
#include "ui_cell_reply.h"

Cell_Reply::Cell_Reply(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Reply)
{
    ui->setupUi(this);
}

Cell_Reply::~Cell_Reply()
{
    delete ui;
}
