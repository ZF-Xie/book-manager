#include "cell_finerecord.h"
#include "ui_cell_finerecord.h"
#include "lib/sqlmgr.h"
Cell_fineRecord::Cell_fineRecord(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_fineRecord)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    initPage();
}

Cell_fineRecord::~Cell_fineRecord()
{
    delete ui;
}

void Cell_fineRecord::initPage(QString strCondition)
{
    auto l=SqlMgr::getInstance()->getfineRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"罚款ID","所借书目ID","被罚者ID","罚款份额","产生日期","还款日期","是否支付罚款"});
    for(int i =0;i<l.size();i++)
    {
        QList<QStandardItem*> items;

        for(int j=0;j<l[i].size();j++)
        {

            items.append(new QStandardItem(l[i][j]));

        }

        m_model.appendRow(items);
    }

}

void Cell_fineRecord::on_btu_del_clicked()
{
    SqlMgr::getInstance()->clearfineRecord();
    initPage();
}



void Cell_fineRecord::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where issue_date like '%%1%' or record_id like '%%1%' or user_id like '%%1%' or fine.status like '%%1%'").arg(arg1);
    initPage(strCond);
}

