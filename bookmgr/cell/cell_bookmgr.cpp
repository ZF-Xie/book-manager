#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"
#include "lib/sqlmgr.h"
Cell_Bookmgr::Cell_Bookmgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Bookmgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Bookmgr::~Cell_Bookmgr()
{
    delete ui;
}

void Cell_Bookmgr::initPage(QString strCondition)
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

//增加图书
void Cell_Bookmgr::on_btn_add_clicked()
{

}

//删除图书
void Cell_Bookmgr::on_btu_del_clicked()
{

}

//修改图书
void Cell_Bookmgr::on_btu_update_clicked()
{

}


void Cell_Bookmgr::on_le_search_textChanged(const QString &arg1)
{

}

