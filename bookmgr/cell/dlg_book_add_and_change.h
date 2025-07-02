#ifndef DLG_BOOK_ADD_AND_CHANGE_H
#define DLG_BOOK_ADD_AND_CHANGE_H

#include <QWidget>

namespace Ui {
class Dlg_book_add_and_change;
}

class Dlg_book_add_and_change : public QWidget
{
    Q_OBJECT

public:
    explicit Dlg_book_add_and_change(QWidget *parent = nullptr);
    ~Dlg_book_add_and_change();

private:
    Ui::Dlg_book_add_and_change *ui;
};

#endif // DLG_BOOK_ADD_AND_CHANGE_H
