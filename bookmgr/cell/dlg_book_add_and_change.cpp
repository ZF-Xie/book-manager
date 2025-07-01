#include "dlg_book_add_and_change.h"
#include "ui_dlg_book_add_and_change.h"

Dlg_book_add_and_change::Dlg_book_add_and_change(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dlg_book_add_and_change)
{
    ui->setupUi(this);
}

Dlg_book_add_and_change::~Dlg_book_add_and_change()
{
    delete ui;
}
