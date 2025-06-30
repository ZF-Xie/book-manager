#ifndef CELL_BOOKHIS_H
#define CELL_BOOKHIS_H

#include <QWidget>
#include <qstandarditemmodel.h>

namespace Ui {
class cell_bookhis;
}

class cell_bookhis : public QWidget
{
    Q_OBJECT

public:
    int user_id;
    explicit cell_bookhis(QWidget *parent = nullptr);
    void initPage(QString strCondition="");
    ~cell_bookhis();

private slots:
    void on_btn_return_clicked();
    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::cell_bookhis *ui;
    QStandardItemModel m_model;
};

#endif // CELL_BOOKHIS_H
