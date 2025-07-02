#include "cell_bookhis.h"
#include "ui_cell_bookhis.h"
#include"lib/sqluserdata.h"
#include <QMessageBox>
#include <ui_book_br.h>


void cell_bookhis::initPage(QString strCondition)
{
    auto l=Sqluserdata::getInstance()->getRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"record_id","user_id","book_id","借阅时间","到期时间","归还时间","状态"});

    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
}



cell_bookhis::cell_bookhis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_bookhis)
{
    ui->setupUi(this);
    initPage();
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}


cell_bookhis::~cell_bookhis()
{
    delete ui;
}

void cell_bookhis::on_le_search_textChanged(const QString &arg1)
{
    initPage();
    QString strCond=QString("where user_id like '%%1%' or book_id like '%%1%'").arg(arg1);
    initPage(strCond);
}





void cell_bookhis::on_btn_return_clicked()
{
    int r=ui->tableView->currentIndex().row();
    if(r<0){return;}
    if(m_model.item(r,6)->text() == "已归还"){
        QMessageBox::information(nullptr,"信息","本书已归还，勿重复操作");
        return;}
    auto id= m_model.item(r,2)->text();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认归还", "确定要归还吗？",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Sqluserdata::getInstance()->returnbook(user_id, id);
        QMessageBox::information(nullptr,"信息","归还成功");}
    initPage();


}
