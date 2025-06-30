#ifndef CELL_BOOKMGR_H
#define CELL_BOOKMGR_H

#include <QWidget>

namespace Ui {
class Cell_Bookmgr;
}

class Cell_Bookmgr : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Bookmgr(QWidget *parent = nullptr);
    ~Cell_Bookmgr();

private:
    Ui::Cell_Bookmgr *ui;
};

#endif // CELL_BOOKMGR_H
