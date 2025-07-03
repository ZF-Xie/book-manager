#ifndef WIN_NOTE_H
#define WIN_NOTE_H

#include <QDialog>

namespace Ui {
class win_note;
}

class win_note : public QDialog
{
    Q_OBJECT

public:
    int user_id;
    explicit win_note(int userid, QWidget *parent = nullptr);
    ~win_note();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::win_note *ui;
};

#endif // WIN_NOTE_H
