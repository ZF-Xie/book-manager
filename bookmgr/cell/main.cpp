#include "cell_main.h"
#include <QApplication>
#include "dlg_login.h"
#include "dlg_register.h"
#include "lib/sql_login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sql_login::getInstance()->init();
    Dlg_Login dlg;
    int ret = dlg.exec();
    while(ret == 5)
    {
        dlg_register w;
        w.exec();
        ret = dlg.exec();
    }
    if(ret == 4)
    {
        exit(0);
        return 0;
    }
    if(ret == 3)
    {
        Cell_Main w;
        w.show();
    }
    if(ret == 2)
    {
        //牢大自己加
    }
    return a.exec();
}

