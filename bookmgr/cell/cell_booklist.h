#ifndef CELL_BOOKLIST_H
#define CELL_BOOKLIST_H
#include<QStandardItemModel>
#include <QWidget>

namespace Ui {
class Cell_booklist;
}

class Cell_booklist : public QWidget
{
    Q_OBJECT

public:
    int user_id;
    explicit Cell_booklist(QWidget *parent = nullptr);
    void initpage(QString strCondition="");
    ~Cell_booklist();

private slots:


    void on_btn_borrow_clicked();

    void on_le_search_textChanged(const QString &arg1);



private:
    Ui::Cell_booklist *ui;
    QStandardItemModel m_model;
};

#endif // CELL_BOOKLIST_H
