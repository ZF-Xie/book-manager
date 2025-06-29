#ifndef CELL_BOOKLIST_H
#define CELL_BOOKLIST_H

#include <QWidget>

namespace Ui {
class Cell_booklist;
}

class Cell_booklist : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_booklist(QWidget *parent = nullptr);
    ~Cell_booklist();

private:
    Ui::Cell_booklist *ui;
};

#endif // CELL_BOOKLIST_H
