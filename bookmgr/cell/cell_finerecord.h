#ifndef CELL_FINERECORD_H
#define CELL_FINERECORD_H

#include <QWidget>
#include<QStandardItemModel>
namespace Ui {
class Cell_fineRecord;
}

class Cell_fineRecord : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_fineRecord(QWidget *parent = nullptr);
    ~Cell_fineRecord();
    void initPage(QString strCondition="");
private slots:
    void on_btu_del_clicked();

    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::Cell_fineRecord *ui;
    QStandardItemModel m_model;
};

#endif // CELL_FINERECORD_H
