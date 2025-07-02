#include "sqluserdata.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QStringList>
#include<QVector>
#include<QSqlRecord>
#include <QDateTime>
#include <cell/dlg_user.h>
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
    QSqlQuery*q = new QSqlQuery(m_db);
    QString strSql =QString("select * from book %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q->exec(strSql);
    if(!ret){

        //qDebug()<<q.lastError().text();
    }else{
        int iCols=q->record().count();
        QStringList l;
        while(q->next()){
            l.clear();
            for(int i=0 ;i<iCols;i++){
                l<<q->value(i).toString();

            }
            vec.push_back(l);

        }

    }
    return vec;
}

QVector<QStringList> Sqluserdata::getNote(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from feedback join user using (user_id) %1").arg(strCondition);
    qDebug() << "getRecord 执行的 SQL：" << strSql;
    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret){

        qDebug()<<q.lastError().text();
    }else{
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i=0 ;i < 2;i++){
                l<<q.value(i).toString();
            }
            l<<q.value(6).toString();
            for(int i=2 ;i < 6;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

QString Sqluserdata::returnbook(int user_id, QString BookId, QString RecordId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update book set available_copies =available_copies +1 where book_id = %1").arg(BookId);
    bool ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
    qDebug()<<"!"<<user_id;
    strSql = QString("UPDATE borrow_record SET return_date = date('now'), status = '已归还' WHERE record_id = %1 ")
                      .arg(RecordId);

    ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
    return QString("");
}



QString Sqluserdata::borrowbook(int user_id,QString BookId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update book set available_copies =available_copies -1 where book_id=%1").arg(BookId);
    bool ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }

    strSql=QString("insert into borrow_record VALUES(null,%1,%2,date('now'),date('now','+30 days') ,null,'未归还')")
                 .arg(user_id)
                 .arg(BookId);
    ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
    return QString("");
}

QVector<QStringList> Sqluserdata::getRecord(int user_id, QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from borrow_record join book using (book_id) where %1").arg(strCondition) + QString("user_id = %1").arg(user_id);
    qDebug() << "getRecord 执行的 SQL：" << strSql;
    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret){

        qDebug()<<q.lastError().text();
    }else{
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i=0 ;i < 2;i++){
                l<<q.value(i).toString();
            }
            l<<q.value(7).toString();
            for(int i=2 ;i < 7;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void Sqluserdata::addNote(int user_id, QString content)
{
    QSqlQuery q(m_db);
    QString strSql=QString("insert into feedback VALUES(null,%1,'%2',date('now'),null,'未回复')").arg(user_id).arg(content);
    bool ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
}





