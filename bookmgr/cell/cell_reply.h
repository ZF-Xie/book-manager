#ifndef CELL_REPLY_H
#define CELL_REPLY_H
#include<QStandardItemModel>
#include <QWidget>

namespace Ui {
class Cell_Reply;
}

class Cell_Reply : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Reply(QWidget *parent = nullptr);
    void initpage(QString strCondition="");
    ~Cell_Reply();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Cell_Reply *ui;
    QStandardItemModel m_model;
};

#endif // CELL_REPLY_H
