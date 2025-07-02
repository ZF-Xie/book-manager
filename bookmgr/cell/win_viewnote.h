#ifndef WIN_VIEWNOTE_H
#define WIN_VIEWNOTE_H

#include <QDialog>

namespace Ui {
class win_viewnote;
}

class win_viewnote : public QDialog
{
    Q_OBJECT

public:
    explicit win_viewnote(QString content1, QString content2, QWidget *parent = nullptr);
    ~win_viewnote();

private slots:
    void on_pushButton_clicked();

private:
    Ui::win_viewnote *ui;
};

#endif // WIN_VIEWNOTE_H
