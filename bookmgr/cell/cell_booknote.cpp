#include "cell_booknote.h"
#include "ui_cell_booknote.h"
#include <lib/sqluserdata.h>

cell_booknote::cell_booknote(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cell_booknote)
{
    ui->setupUi(this);
}

void cell_booknote::initpage(QString strCondition)
{
    auto l = Sqluserdata::getInstance()->getNote(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"留言id","用户id","用户名称", "内容","提交时间","回复内容","回复状态"});
    for (int i=0;i<l.size();i++){
        QList<QStandardItem*>items;
        for(int j=0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
}

cell_booknote::~cell_booknote()
{
    delete ui;
}

void cell_booknote::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where name like '%%1%' or type1 like '%%1%' or type2 like '%%1%'").arg(arg1);
    initpage(strCond);
}

