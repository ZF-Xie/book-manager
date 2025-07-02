#include "cell_main.h"
#include <QApplication>
#include "dlg_login.h"
#include "dlg_register.h"
#include "lib/sql_login.h"
#include "dlg_user.h"
int login_event(Dlg_Login* dlg){
    int ret = dlg->exec();
    while(ret == -2)
    {
        dlg_register w;
        w.exec();
        ret = dlg->exec();
    }
    if(ret == -1)
    {
        exit(0);
        return ret;
    }
    if(ret == -4)
    {
        return ret;
    }
    if(ret > 0)
    {
        dlg_user w(ret);
        qDebug()<<"!!!!!!!"<<w.user_id;
        int res = w.exec();
        if(res == -3)
        {
            ret = login_event(dlg);
        }
    }
    return ret;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sql_login::getInstance()->init();
    Dlg_Login dlg;
    Cell_Main w;
    int ret = login_event(&dlg);
    if(ret == -4)
    {
        w.show();
        return a.exec();
    }
    return a.exec();
}
