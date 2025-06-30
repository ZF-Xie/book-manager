#ifndef BOOK_HIS_H
#define BOOK_HIS_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class book_his;
}

class book_his : public QWidget
{
    Q_OBJECT

public:
    int user_id;
    explicit book_his(QWidget *parent = nullptr);
    void initpage(QString strCondition="");
    ~book_his();

private:
    Ui::book_his *ui;
    QStandardItemModel m_model;
};

#endif // BOOK_HIS_H
