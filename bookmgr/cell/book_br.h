#ifndef BOOK_BR_H
#define BOOK_BR_H

#include <QDialog>

namespace Ui {
class book_br;
}

class book_br : public QDialog
{
    Q_OBJECT

public:
    explicit book_br(QWidget *parent = nullptr);
    void setbookid(int id);
    ~book_br();

private slots:
    void on_btn_bor_clicked();

    void on_pushButton_2_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::book_br *ui;
    int m_bookid;
};

#endif // BOOK_BR_H
