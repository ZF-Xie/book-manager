#include "sqlmgr.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>
SqlMgr*SqlMgr::instance=nullptr;
SqlMgr::SqlMgr()
{

}

SqlMgr::~SqlMgr()
{

}

void SqlMgr::init()
{


}

QVector<QStringList> SqlMgr::getUser(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select * from user %1").arg(strCondition);
    bool ret=q.exec(strSql);
    QVector<QStringList>vec;
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }else
    {
        int iCols=q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::AddUser(QVector<QStringList> v)
{
    m_db.transaction();
    QSqlQuery q(m_db);
    for(auto it:v)
    {
    QString strSql=QString("insert into user VALUES(NULL,'%1','%1','%1');")
                             .arg(it[0])
                             .arg(it[1])
                             .arg(it[2]);
    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    }
    m_db.commit();
}

void SqlMgr::delUser(QString strId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from user where user_id = '%1'").arg(strId);
    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> SqlMgr::getBooks(QString strCondition)
{

}

void SqlMgr::AddBooks(QVector<QStringList>)
{

}

void SqlMgr::UpdateBooks(QStringList)
{

}

void SqlMgr::delbook(QString strId)
{

}

QVector<QStringList> SqlMgr::getRecord(QString strCondition)
{

}

QString SqlMgr::clearRecord()
{

}





