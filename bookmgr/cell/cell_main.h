#ifndef CELL_MAIN_H
#define CELL_MAIN_H

#include <QMainWindow>
#include "cell_usermgr.h"
#include "cell_bookmgr.h"
#include "cell_record.h"
#include "cell_reply.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Cell_Main;
}
QT_END_NAMESPACE

class Cell_Main : public QMainWindow
{
    Q_OBJECT

public:
    Cell_Main(QWidget *parent = nullptr);
    ~Cell_Main();

    //为符合账密验证创建的函数，不清楚可不可以
    static Cell_Main* instance;

    static Cell_Main* getInstance(){
        if(nullptr== instance){
            instance=new Cell_Main();

        }
        return instance;
    }



    void initPage();
    void dealMenu();
private slots:
    void on_toolButton_2_clicked();

private:
    Ui::Cell_Main *ui;
    Cell_UserMgr*m_userPage;
    Cell_Bookmgr*m_bookPage;
    Cell_Record*m_recordPage;
    Cell_Reply*m_replyPage;
};
#endif // CELL_MAIN_H
