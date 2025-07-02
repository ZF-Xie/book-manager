#ifndef WIN_REPLY_H
#define WIN_REPLY_H

#include <QDialog>

namespace Ui {
class win_reply;
}

class win_reply : public QDialog
{
    Q_OBJECT

public:
    int feedback_id;
    explicit win_reply(int feedbackid, QString content, QDialog *parent = nullptr);
    ~win_reply();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::win_reply *ui;
};

#endif // WIN_REPLY_H
