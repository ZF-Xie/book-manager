#ifndef SQL_LOGIN_H
#define SQL_LOGIN_H

#include<QtDebug>
#include<QSqlDatabase>
class sql_login
{
public:
    sql_login();
    ~sql_login();

    static sql_login* instance;

    static sql_login* getInstance() {
        if(instance == nullptr) {
            instance = new sql_login();
        }
        return instance;
    }

    void init();
    //登录
    QString Login(QString strUser, QString strPassword);

    //判断用户权限
    bool Judge_role(QString strUser);

    //注册
    bool Register(QString strUser, QString strPassword);

    //获取用户id
    int Get_id(QString strUser);

private:
    QSqlDatabase m_db;
};

#endif // SQL_LOGIN_H
