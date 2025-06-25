#include "cell_main.h"
#include <QApplication>
#include "dlg_login.h"
#include "dlg_register.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dlg_Login dlg;
    int ret = dlg.exec();
    while(ret == 2)
    {
        dlg_register w;
        w.exec();
        ret = dlg.exec();
    }
    if(ret == 0)
    {
        exit(0);
        return 0;
    }
    if(ret == 1)
    {
        Cell_Main w;
        w.show();
    }
    return a.exec();
}
