#ifndef DLG_USERAU_H
#define DLG_USERAU_H

#include <QDialog>

namespace Ui {
class dlg_userADD;
}

class dlg_userADD : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_userADD(QStringList l,QWidget *parent = nullptr);
    explicit dlg_userADD(QWidget *parent = nullptr);
    ~dlg_userADD();
    void setType(int id);
private slots:
    void on_btu_ok_clicked();

    void on_btu_no_clicked();

private:
    Ui::dlg_userADD *ui;
    int m_id=-1;
};

#endif // DLG_USERAU_H
