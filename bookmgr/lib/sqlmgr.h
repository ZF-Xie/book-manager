#ifndef SQLMGR_H
#define SQLMGR_H

#include<QtDebug>
#include<QSqlDatabase>
#include<QSqlQuery>
class SqlMgr
{
public:
    SqlMgr();
    ~SqlMgr();

    static SqlMgr*instance;

    static SqlMgr*getInstance()
    {
        if(nullptr==instance)
        {
           instance=new SqlMgr();
        }
        return instance;
    }

    void init();
    //登录
    bool login(QString strUser,QString strPass);
    //获取所有用户
    QVector<QStringList>getUser(QString strCondition="");
    //添加用户
    void AddUser(QVector<QStringList>);
    //修改用户
    void UpdateUsers(QStringList ldate);
    //删除用户
    void delUser(QString strId);
    //获取所有图书
    QVector<QStringList>getBooks(QString strCondition="");
    //增加图书
    void AddBooks(QVector<QStringList>);
    //修改图书
    void UpdateBooks(QStringList ldate);
    //删除图书
    QString delbook(QString strId);
    //获取借阅记录
    QVector<QStringList>getRecord(QString strCondition="");

    //清空借阅记录
    void clearRecord();

private:
    QSqlDatabase m_db;
};

#endif // SQLMGR_H
