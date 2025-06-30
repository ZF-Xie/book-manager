#include "cell_booklist.h"
#include "ui_cell_booklist.h"
#include"lib/sqluserdata.h"

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
    /*void Cell_Bookmgr::initPage(QString strCondition)
{
//获取所有图书
    auto l=SqlMgr::getInstance()->getBooks(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"书籍ID","书名","作者","书籍大类","具体类型","价格","书籍总数","可借阅数目"});
    for(int i =0;i<l.size();i++)
    {
        QList<QStandardItem*> items;

        for(int j=0;j<l[i].size();j++)
        {
            if(l[i].size()==4)
            {
                if(j<2||j==3)
                {
                    items.append(new QStandardItem(l[i][j]));
                }
            }
        }

        m_model.appendRow(items);
    }
}
*/



}

Cell_booklist::~Cell_booklist()
{
    delete ui;
}



void Cell_booklist::on_btn_borrow_clicked()
{

}


void Cell_booklist::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where title like '%%1%' or category1 like '%%1%' or category2 like '%%1%'").arg(arg1);
    initpage(strCond);
}


