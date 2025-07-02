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

<<<<<<< Updated upstream
=======
        QSqlQuery q(m_db);
        QString strSql =QString("select * from borrow_record join user using (user_id) %1").arg(strCondition);
        qDebug() << "getRecord 执行的 SQL：" << strSql;
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

>>>>>>> Stashed changes
}

QString SqlMgr::clearRecord()
{

<<<<<<< Updated upstream
=======

QVector<QStringList> SqlMgr::getNote(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from feedback join user using (user_id) %1").arg(strCondition);
    QVector<QStringList> vec;
    qDebug() << "getRecord 执行的 SQL：" << strSql;
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
>>>>>>> Stashed changes
}





