#include "sqluserdata.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QStringList>
#include<QVector>
#include<QSqlRecord>
Sqluserdata* Sqluserdata::instance=nullptr;
Sqluserdata::Sqluserdata() {}

Sqluserdata::~Sqluserdata()
{

}


void Sqluserdata::init()
{

}

QVector<QStringList> Sqluserdata::getBooks(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from book %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret){

        //qDebug()<<q.lastError().text();
    }else{
        int iCols=q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i=0 ;i<iCols;i++){
                l<<q.value(i).toString();

            }
            vec.push_back(l);

        }

    }
    return vec;
}

QVector<QStringList> Sqluserdata::getRecord(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from record 1%").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret){

        //qDebug()<<q.lastError().text();
    }else{
        int iCols=q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i=0 ;i<iCols;i++){
                l<<q.value(i).toString();

            }
            vec.push_back(l);

        }

    }
    return vec;
}





