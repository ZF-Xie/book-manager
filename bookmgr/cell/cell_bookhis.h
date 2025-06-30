#ifndef CELL_BOOKHIS_H
#define CELL_BOOKHIS_H

#include <QWidget>

namespace Ui {
class cell_bookhis;
}

class cell_bookhis : public QWidget
{
    Q_OBJECT

public:
    explicit cell_bookhis(QWidget *parent = nullptr);
    ~cell_bookhis();

private slots:
    void on_btu_clear_clicked();

    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::cell_bookhis *ui;
};

#endif // CELL_BOOKHIS_H
