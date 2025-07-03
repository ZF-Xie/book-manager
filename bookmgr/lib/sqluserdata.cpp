 #include "sqluserdata.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QStringList>
#include<QVector>
#include<QSqlRecord>
#include <QDateTime>
#include <cell/dlg_user.h>
#include <ctime>
#include <iostream>
#include <string>
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

void Sqluserdata::updateUser()
{
    QSqlQuery q(m_db);
    QSqlQuery q2(m_db);
    QString strSql = QString("select * from fine where status = '未支付' or status = '未归还且未支付'");
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
    while(q.next()){
        QString userid = q.value(2).toString();
        QString strSql = QString("update user set status = '存在未支付的罚款' where user_id = %1").arg(userid);
        q2.exec(strSql);
    }
}

QString getCurrentDate() {
    QDate currentDate = QDate::currentDate();
    return currentDate.toString("yyyy-MM-dd");
}

int get_year(std::string s){
    int res = 0;
    for(int i = 0; i < 4; i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

int get_month(std::string s){
    int res = 0;
    for(int i = 5; i < 7; i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

QString count_amount(QString due_date, QString now_date, QString price, bool st){
    std::string Due_date = due_date.toStdString();
    std::string Now_date = now_date.toStdString();
    std::string Price = price.toStdString();
    int z = 0, d = 0, i = 0;
    int n = Price.size();
    for(; i < n && Price[i]>='0' && Price[i] <= '9'; i++){
        z = z * 10 + Price[i] - '0';
    }
    i++;
    //std::cout<<Due_date;
    for(; i < n && Price[i]>='0' && Price[i] <= '9'; i++){
        d = d * 10 + Price[i] - '0';
    }
    int due_year = get_year(Due_date);
    int due_month = get_month(Due_date);
    int now_year = get_year(Now_date);
    int now_month = get_month(Now_date);
    qDebug()<<z;
    qDebug()<<d;
    qDebug()<<due_year;
    qDebug()<<due_month;
    qDebug()<<now_year;
    qDebug()<<now_month;

    if(!st){
        int mod = 1;
        while(mod < d)
            mod *= 10;
        if(mod >= 10)
            mod /= 10;
        z = z * 10 + d / mod;
        d = d % mod;
    }
    else{
        int multi = (now_year - due_year) * 12 + now_month - due_month + 1;
        int mod = 1;
        while(mod < d)
            mod *= 10;
        d = d + mod * (z % 10);
        z = z / 10;
        mod *= 10;
        z = z * multi + (d * multi) / mod;
        d = (d * multi) % mod;
        while((d % 10) == 0 && d > 0)
            d /= 10;
    }
    QString res = QString("%1.%2").arg(z).arg(d);
    return res;
}

void Sqluserdata::updateFine()
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from borrow_record where status = '未归还'");
    q.exec(strSql);
    while(q.next()){
        QSqlQuery q2(m_db);
        QString now_date = getCurrentDate();
        QString due_date = q.value(4).toString();
        QString record_id = q.value(0).toString();
        QString user_id = q.value(1).toString();
        QSqlQuery qp(m_db);
        QString strSqlp =QString("select * from borrow_record join book using (book_id) where record_id = %1").arg(record_id);
        qp.exec(strSqlp);
        qp.next();
        QString price = qp.value(11).toString();
        if(due_date < now_date)
        {
            qDebug()<<"@@@@@";
            QString strSql2 = QString("select * from fine where record_id = '%1'").arg(record_id);
            q2.exec(strSql2);
            if(q2.next())
            {
                int fine_id = q2.value(0).toInt();
                changeFine(fine_id, count_amount(due_date, now_date, price, 0), NULL, "未归还且未支付");
            }
            else
            {
                insertFine(count_amount(due_date, now_date, price, 0), record_id, user_id, "未归还且未支付");
            }
        }
    }
    strSql = QString("select * from borrow_record where status = '已归还'");
    q.exec(strSql);
    while(q.next()){
        QSqlQuery q2(m_db);
        QString return_date = q.value(5).toString();
        QString due_date = q.value(4).toString();
        QString record_id = q.value(0).toString();
        QString user_id = q.value(1).toString();
        QSqlQuery qp(m_db);
        QString strSqlp =QString("select * from borrow_record join book using (book_id) where record_id = %1").arg(record_id);
        qp.exec(strSqlp);
        qp.next();
        QString price = qp.value(11).toString();
        if(due_date < return_date)
        {
            qDebug()<<"@@@@@";
            QString strSql2 = QString("select * from fine where record_id = '%1'").arg(record_id);
            q2.exec(strSql2);
            if(q2.next())
            {
                int fine_id = q2.value(0).toInt();
                changeFine(fine_id, count_amount(due_date, return_date, price, 1), NULL, "未支付");
            }
            else
            {
                insertFine(count_amount(due_date, return_date, price, 1), record_id, user_id, "未支付");
            }
        }
    }
}

void Sqluserdata::changeFine(int fine_id, QString new_amount, QString pay_date, QString status)
{
    QSqlQuery Q(m_db);
    QString str = QString("select * from fine where fine_id = '%1' and status = '已支付'").arg(fine_id);
    Q.exec(str);
    if(Q.next()){
        return;
    }
    if(status == "已支付"){
        QSqlQuery q2(m_db);
        QSqlQuery q3(m_db);
        QString strSql2 = QString("select * from fine where fine_id = '%1'").arg(fine_id);
        q2.exec(strSql2);
        q2.next();
        QString record_id = q2.value(1).toString();
        qDebug()<<record_id;
        strSql2 = QString("select * from borrow_record where record_id = '%1'").arg(record_id);
        q3.exec(strSql2);
        q3.next();
        if(q3.value(6).toString() == "未归还"){
            QSqlQuery q(m_db);
            strSql2 = QString("UPDATE borrow_record SET status = '已遗失' WHERE record_id = %1 ").arg(record_id);
            q.exec(strSql2);
        }
        QString user_id = q3.value(1).toString();
        QString strSql = QString("select * from fine where status = '未支付' or status = '未归还且未支付' and user_id = '%1'").arg(user_id);
        QSqlQuery q4(m_db);
        bool ret = q4.exec(strSql);
        if(!ret)
            qDebug()<<"@@@@@";
        q4.next();
        if(!q4.next()){
            QSqlQuery q5(m_db);
            strSql = QString("update user set status = '良好' where user_id = '%1'").arg(user_id);
            bool ret = q5.exec(strSql);
            if(!ret)
                qDebug()<<"@@@@@";
        }
    }
    QSqlQuery q(m_db);
    QString strSql = QString("UPDATE fine SET amount = '%1', pay_date = '%2' , status = '%3' WHERE fine_id = %4").arg(new_amount, pay_date, status).arg(fine_id);
    bool ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
}

void Sqluserdata::insertFine(QString amount, QString record_id, QString user_id, QString status)
{
    QSqlQuery q(m_db);
    QString strSql=QString("insert into fine VALUES(null, '%1','%2','%3','%4',null,'%5')").arg(record_id, user_id, amount, getCurrentDate(), status);
    bool ret =q.exec(strSql);
    if(!ret){
        qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> Sqluserdata::getFine(int user_id, QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql =QString("select * from fine where %1").arg(strCondition) + QString("user_id = %1").arg(user_id);
    qDebug()<<strSql;
    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
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

