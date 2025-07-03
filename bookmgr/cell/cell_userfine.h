#ifndef CELL_USERFINE_H
#define CELL_USERFINE_H

#include<QStandardItemModel>
#include <QWidget>

namespace Ui {
class cell_userfine;
}

class cell_userfine : public QWidget
{
    Q_OBJECT

public:
    int user_id;
    explicit cell_userfine(QWidget *parent = nullptr);
    void initpage(QString strCondition="");
    ~cell_userfine();

private slots:
    void on_le_search_textChanged(const QString &arg1);

    void on_btu_del_clicked();

private:
    Ui::cell_userfine *ui;
    QStandardItemModel m_model;
};

#endif // CELL_USERFINE_H

