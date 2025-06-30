#ifndef CELL_BOOKNOTE_H
#define CELL_BOOKNOTE_H

#include <QWidget>

namespace Ui {
class cell_booknote;
}

class cell_booknote : public QWidget
{
    Q_OBJECT

public:
    explicit cell_booknote(QWidget *parent = nullptr);
    ~cell_booknote();

private:
    Ui::cell_booknote *ui;
};

#endif // CELL_BOOKNOTE_H
