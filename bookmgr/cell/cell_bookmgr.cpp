#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"
#include "lib/sqlmgr.h"
#include <QFileDialog>
#include<QMessageBox>
Cell_Bookmgr::Cell_Bookmgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Bookmgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    initPage();
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
        m_model.setHorizontalHeaderLabels(QStringList{"图书id","图书名称","作者","类型1","类型2","价格","数量","剩余数量"});
        for (int i=0;i<l.size();i++){
            QList<QStandardItem*>items;
            for(int j=0;j<l[i].size();j++){
                items.append(new QStandardItem(l[i][j]));
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
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中书籍");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        SqlMgr::getInstance()->delUser(id);
        initPage();
    }
}

//修改图书
void Cell_Bookmgr::on_btu_update_clicked()
{

}


void Cell_Bookmgr::on_le_search_textChanged(const QString &arg1)
{

}

