#include "cell_bookhis.h"
#include "ui_cell_bookhis.h"
#include"lib/sqluserdata.h"


void cell_bookhis::initPage(QString strCondition)
{
    auto l=Sqluserdata::getInstance()->getRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"图书id","图书名称","作者","类型1","类型2","价格","数量"});
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
    QString strCond=QString("where name like '%%1%' or type1 like '%%1%' or type2 like '%%1%'").arg(arg1);
    initPage(strCond);
}


void cell_bookhis::on_btn_return_clicked()
{

}

