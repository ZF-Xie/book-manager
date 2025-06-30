#ifndef CELL_RECORD_H
#define CELL_RECORD_H

#include <QWidget>
#include <QStandardItemModel>
namespace Ui {
class Cell_Record;
}

class Cell_Record : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Record(QWidget *parent = nullptr);
    ~Cell_Record();
    void initPage(QString strCondition="");
private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Cell_Record *ui;
    QStandardItemModel m_model;
};

#endif // CELL_RECORD_H
