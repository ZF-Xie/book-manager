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
    QString strSql=QString("select*from user '%1'").arg(strCondition);
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

void SqlMgr::AddUser(QVector<QStringList>)
{

}

void SqlMgr::delUser(QString strId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from use where user_id = '%1'").arg(strId);
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





