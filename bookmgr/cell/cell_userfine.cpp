#include "cell_userfine.h"
#include "ui_cell_userfine.h"
#include"lib/sqluserdata.h"
#include <ctime>
#include <QDateTime>
#include <QMessageBox>
cell_userfine::cell_userfine(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_userfine)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    initpage();
}

void cell_userfine::initpage(QString strCondition)
{
    Sqluserdata::getInstance()->updateFine();
    auto l=Sqluserdata::getInstance()->getFine(user_id, strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"罚款id","record_id","user_id","罚款金额","产生时间","支付时间","支付状态"});
    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }

}

cell_userfine::~cell_userfine()
{
    delete ui;
}

void cell_userfine::on_le_search_textChanged(const QString &arg1)
{
    initpage();
    QString strCond=QString("issue_date like '%%1%'  or status like '%%1%' and ").arg(arg1);
    initpage(strCond);
}


void cell_userfine::on_btu_del_clicked()
{
    int r=ui->tableView->currentIndex().row();
    if(r<0){return;}
    if(m_model.item(r,6)->text() == "已支付"){
        QMessageBox::information(nullptr,"信息","已支付","勿重复操作");
        return;}
    auto fine_id= m_model.item(r,0)->text().toInt();
    auto amount= m_model.item(r,3)->text();
    QString message = QString("确定要支付罚款吗？\n金额：%1 元").arg(amount);
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认支付", message,QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Sqluserdata::getInstance()->changeFine(fine_id, amount, QDate::currentDate().toString("yyyy-MM-dd"), "已支付");
        QMessageBox::information(nullptr,"信息","支付成功");}
    initpage();
}

