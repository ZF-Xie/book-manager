#ifndef CELL_REPLY_H
#define CELL_REPLY_H

#include <QWidget>

namespace Ui {
class Cell_Reply;
}

class Cell_Reply : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Reply(QWidget *parent = nullptr);
    ~Cell_Reply();

private:
    Ui::Cell_Reply *ui;
};

#endif // CELL_REPLY_H
