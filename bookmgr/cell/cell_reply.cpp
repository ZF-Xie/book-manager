#include "cell_reply.h"
#include "ui_cell_reply.h"
#include "lib/sqlmgr.h"
#include "win_reply.h"
Cell_Reply::Cell_Reply(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Reply)
{
    ui->setupUi(this);
    initpage();
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void Cell_Reply::initpage(QString strCondition)
{
    auto l = SqlMgr::getInstance()->getNote(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"留言id","用户id","用户名称","内容","提交时间","回复内容","回复状态"});
    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
}

Cell_Reply::~Cell_Reply()
{
    delete ui;
}

void Cell_Reply::on_lineEdit_textChanged(const QString &arg1)
{
    QString strCond=QString("where user_id like '%%1%' or submit_date like '%%1%' or status like '%%1%'").arg(arg1);
    initpage(strCond);
}


void Cell_Reply::on_pushButton_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r < 0)
    {
        return;
    }
    auto content = m_model.item(r, 3)->text();
    win_reply w(m_model.item(r, 0)->text().toInt(), content);
    w.exec();
    initpage();
}


void Cell_Reply::on_pushButton_2_clicked()
{
    int r = ui->tableView->currentIndex().row();
    auto feedback_id = m_model.item(r, 0)->text().toInt();
    SqlMgr::getInstance()->deleteNote(feedback_id);
    initpage();
}

