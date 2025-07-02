#include "cell_booklist.h"
#include "ui_cell_booklist.h"
#include"lib/sqluserdata.h"
#include"book_br.h"

#include <QMessageBox>
Cell_booklist::Cell_booklist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_booklist)
{
    ui->setupUi(this);
    initpage();
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void Cell_booklist::initpage(QString strCondition)
{
    auto l=Sqluserdata::getInstance()->getBooks(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"图书id","图书名称","作者","类型1","类型2","价格","数量","剩余数量"});
    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }

}

Cell_booklist::~Cell_booklist()
{
    delete ui;
}



void Cell_booklist::on_btn_borrow_clicked()
{
    int r=ui->tableView->currentIndex().row();
    if(r<0){return;}
    auto id= m_model.item(r,0)->text();
    auto cnt=m_model.item(r,7)->text().toInt();
    if(cnt<=0){
        QMessageBox::information(nullptr,"信息","借阅失败，数量不足");
        return;
    }
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认借阅", "确定要借阅吗？",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Sqluserdata::getInstance()->borrowbook(user_id, id);
    QMessageBox::information(nullptr,"信息","借阅成功");
        initpage();
    }
}

void Cell_booklist::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where title like '%%1%' or category1 like '%%1%' or category2 like '%%1%'").arg(arg1);
    initpage(strCond);
}








