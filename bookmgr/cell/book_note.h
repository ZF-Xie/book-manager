#ifndef BOOK_NOTE_H
#define BOOK_NOTE_H

#include <QWidget>

namespace Ui {
class book_note;
}

class book_note : public QWidget
{
    Q_OBJECT

public:
    explicit book_note(QWidget *parent = nullptr);
    ~book_note();

private:
    Ui::book_note *ui;
};

#endif // BOOK_NOTE_H
