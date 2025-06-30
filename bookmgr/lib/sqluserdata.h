#ifndef SQLUSERDATA_H
#define SQLUSERDATA_H
#include<QtDebug>
#include<QSqlDatabase>
class Sqluserdata
{
public:
    Sqluserdata();
    ~Sqluserdata();

    static Sqluserdata* instance;

    static Sqluserdata* getInstance(){
        if(nullptr== instance){
            instance=new Sqluserdata();

        }
        return instance;
    }



    void init();


    //获取全部图书
    QVector<QStringList>getBooks(QString strCondition="");

    //图书归还
    QString returnbook(QString strUserId,QString BookId);
    //图书借阅
    QString borrowbook(QString strUserId,QString BookId);
    //留言图书-牢谢
    QString notebook(QString strUserId,QString BookId);
    //获取借阅记录
    QVector<QStringList>getRecord(QString strCondition="");

private:
    QSqlDatabase m_db;
};

#endif // SQLUSERDATA_H
