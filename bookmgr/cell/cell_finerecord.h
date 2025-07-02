#ifndef CELL_FINERECORD_H
#define CELL_FINERECORD_H

#include <QWidget>

namespace Ui {
class Cell_fineRecord;
}

class Cell_fineRecord : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_fineRecord(QWidget *parent = nullptr);
    ~Cell_fineRecord();

private:
    Ui::Cell_fineRecord *ui;
};

#endif // CELL_FINERECORD_H
