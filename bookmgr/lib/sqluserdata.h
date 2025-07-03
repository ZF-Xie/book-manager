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
    QVector<QStringList>getNote(QString strCondition="");

    //图书归还
    QString returnbook(int user_id, QString BookId, QString RecordId);
    //图书借阅
    QString borrowbook(int user_id,QString BookId);
    //留言图书-牢谢
    QString notebook(QString strUserId,QString BookId);
    //获取借阅记录
    QVector<QStringList>getRecord(int user_id, QString strCondition="");
    //添加留言
    void addNote(int user_id, QString content);
    //更新全部用户状态
    void updateUser();
    //更新全部罚款状态
    void updateFine();
    //更新罚款状态
    void changeFine(int fine_id, QString new_amount, QString pay_date, QString status);
    //新增罚款
    void insertFine(QString amount, QString record_id, QString user_id, QString status);
    //获取罚款
    QVector<QStringList>getFine(int user_id, QString strCondition="");
private:
    QSqlDatabase m_db;
};

#endif // SQLUSERDATA_H
