#include "cell_booknote.h"
#include "ui_cell_booknote.h"
<<<<<<< Updated upstream

=======
#include "win_note.h"
#include "win_viewnote.h"
>>>>>>> Stashed changes
#include <lib/sqluserdata.h>

cell_booknote::cell_booknote(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_booknote)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    initpage();
}

void cell_booknote::initpage(QString strCondition)
{
<<<<<<< Updated upstream


=======
    auto l = Sqluserdata::getInstance()->getNote(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"留言id","用户id","用户名称","内容","提交时间","回复内容","回复状态"});
    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
>>>>>>> Stashed changes
}

cell_booknote::~cell_booknote()
{
    delete ui;
}

void cell_booknote::on_lineEdit_textChanged(const QString &arg1)
{
    QString strCond=QString("where user_id like '%%1%' or content like '%%1%' or submit_date like '%%1%' or feedback.status like '%%1%'").arg(arg1);
    initpage(strCond);
}


void cell_booknote::on_pushButton_2_clicked()
{
    win_note w(user_id);
    w.exec();
    initpage();
}


void cell_booknote::on_pushButton_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r < 0)
    {
        return;
    }
    auto content1 = m_model.item(r, 3)->text();
    auto content2 = m_model.item(r, 5)->text();
    win_viewnote w(content1, content2);
    w.exec();
    initpage();
}

