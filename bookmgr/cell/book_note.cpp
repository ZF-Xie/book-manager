#include "book_note.h"
#include "ui_book_note.h"

book_note::book_note(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::book_note)
{
    ui->setupUi(this);
}

book_note::~book_note()
{
    delete ui;
}
