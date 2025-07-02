#ifndef DLG_USER_H
#define DLG_USER_H

#include <QDialog>
#include"cell_booklist.h"
#include"cell_booknote.h"
#include"cell_bookhis.h"


namespace Ui {
class dlg_user;
}

class dlg_user : public QDialog
{
    Q_OBJECT
public:
    int user_id;
public:
    explicit dlg_user(int _user_id, QWidget *parent = nullptr);
    ~dlg_user();
    void initpage();
    void dealMenu();

private slots:

    void on_btn_returndlg_clicked();

private:
    Ui::dlg_user *ui;
    cell_bookhis *m_hisPage;
    cell_booknote *m_notePage;
    Cell_booklist *m_listPage;


};

#endif // DLG_USER_H
