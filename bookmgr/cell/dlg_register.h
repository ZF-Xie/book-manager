#ifndef DLG_REGISTER_H
#define DLG_REGISTER_H

#include <QDialog>

namespace Ui {
class dlg_register;
}

class dlg_register : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_register(QWidget *parent = nullptr);
    ~dlg_register();

private slots:
    void on_btn_confirm_clicked();

    void on_btn_back_clicked();

private:
    Ui::dlg_register *ui;
};

#endif // DLG_REGISTER_H
