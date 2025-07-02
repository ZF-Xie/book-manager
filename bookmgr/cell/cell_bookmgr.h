#ifndef CELL_BOOKMGR_H
#define CELL_BOOKMGR_H

#include<QStandardItemModel>
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
    void initPage(QString strCondition="");

private slots:
    void on_btn_add_clicked();

    void on_btu_del_clicked();

    void on_btu_update_clicked();

    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::Cell_Bookmgr *ui;
    QStandardItemModel m_model;
};

#endif // CELL_BOOKMGR_H
