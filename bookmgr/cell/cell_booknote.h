#ifndef CELL_BOOKNOTE_H
#define CELL_BOOKNOTE_H

#include <QStandardItemModel>
#include <QWidget>

namespace Ui {
class cell_booknote;
}

class cell_booknote : public QWidget
{
    Q_OBJECT

public:
    int user_id;
    explicit cell_booknote(QWidget *parent = nullptr);
    void initpage(QString strCondition="");
    ~cell_booknote();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cell_booknote *ui;
    QStandardItemModel m_model;
};

#endif // CELL_BOOKNOTE_H
