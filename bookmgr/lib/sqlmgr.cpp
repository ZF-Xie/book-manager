#include "sqlmgr.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QStringList>
#include<QVector>
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
    if(0==v.size())
    {
        return;
    }
    auto ldate=v[0];
    QSqlQuery q(m_db);
    QString strSql=QString("insert into user "
                             "values(null,'%1','%2','%3','%4','%5','%6')")
                         .arg(ldate[1])
                         .arg(ldate[2])
                         .arg(ldate[3])
                         .arg(ldate[4])
                         .arg(ldate[5])
                         .arg(ldate[6]);

    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

void SqlMgr::UpdateUsers(QStringList ldate)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update user set user_name = '%1',password_hash='%2',role='%3',true_name='%4',phone_number='%5',status='%6' where user_id='%7'")

                         .arg(ldate[1])
                         .arg(ldate[2])
                         .arg(ldate[3])
                         .arg(ldate[4])
                         .arg(ldate[5])
                         .arg(ldate[6])
                         .arg(ldate[0]);

    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
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



void SqlMgr::AddBooks(QVector<QStringList>vec)
{
    if(0==vec.size())
    {
        return;
    }
    auto ldate=vec[0];
    QSqlQuery q(m_db);
    QString strSql=QString("insert into book "
                             "values(null,'%1','%2','%3','%4','%5','%6','%7','%8')")
                         .arg(ldate[1])
                         .arg(ldate[2])
                         .arg(ldate[3])
                         .arg(ldate[4])
                         .arg(ldate[5])
                         .arg(ldate[6])
                         .arg(ldate[7])
                         .arg(ldate[8]);

    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

void SqlMgr::UpdateBooks(QStringList ldate)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update book set title = '%1',"
                             "author='%2',"
                             "category1='%3',"
                             "category2='%4',"
                             "price='%5',"
                             "total_copies='%6',"
                             "available_copies='%7',"
                             "place='%8' "
                             "where book_id=%9")
                         .arg(ldate[1])
                         .arg(ldate[2])
                         .arg(ldate[3])
                         .arg(ldate[4])
                         .arg(ldate[5])
                         .arg(ldate[6])
                         .arg(ldate[7])
                         .arg(ldate[8])
                         .arg(ldate[0]);

    bool ret=q.exec(strSql);

    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

QString SqlMgr::delbook(QString strId)
{
    QString strRet;
    QSqlQuery q(m_db);
    QString strSql=QString("delete from book where book_id = '%1'").arg(strId);
    bool ret=q.exec(strSql);
    strSql=QString("delete from sqlite_sequence where name ='book_id'");
    q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
        strRet="删除失败，请检查。";
    }
    return strRet;
}

QVector<QStringList> SqlMgr::getRecord(QString strCondition)
{

        QSqlQuery q(m_db);
        QString strSql =QString("select * from borrow_record join user using (user_id) %1").arg(strCondition);
        QVector<QStringList> vec;
        bool ret =q.exec(strSql);
        if(!ret){
            //qDebug()<<q.lastError().text();
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

void SqlMgr::clearRecord()
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from borrow_record ");
    bool ret=q.exec(strSql);
    strSql=QString("delete from sqlite_sequence where name ='borrow_record' ");
    q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}


QVector<QStringList> SqlMgr::getNote(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from feedback join user using (user_id) %1").arg(strCondition);
    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret){

        //qDebug()<<q.lastError().text();
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

void SqlMgr::replyNote(int feedback_id, QString recontent)
{
    QSqlQuery q(m_db);
    QString strSql =QString("UPDATE feedback set reply = '%1', status = '已回复' where feedback_id = '%2'").arg(recontent).arg(feedback_id);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<< q.lastError().text();
    }
}

void SqlMgr::deleteNote(int feedback_id)
{
    if(feedback_id <= 0)
        return;
    QSqlQuery q(m_db);
    QString strSql =QString("delete from feedback where feedback_id = %1").arg(feedback_id);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<< q.lastError().text();
    }
}


QVector<QStringList> SqlMgr::getfineRecord(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from fine %1").arg(strCondition);

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

void SqlMgr::clearfineRecord()
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from fine ");
    bool ret=q.exec(strSql);
    strSql=QString("delete from sqlite_sequence where name ='fine_id' ");
    q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}
