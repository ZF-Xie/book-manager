#ifndef DLG_BOOKAU_H
#define DLG_BOOKAU_H

#include <QDialog>

namespace Ui {
class Dlg_bookAU;
}

class Dlg_bookAU : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_bookAU(QWidget *parent = nullptr);
    ~Dlg_bookAU();
    void setType(int id);
private slots:
    void on_btn_ok_clicked();

    void on_btn_no_clicked();

private:
    Ui::Dlg_bookAU *ui;
    int m_id=-1;
};

#endif // DLG_BOOKAU_H
