#include "cell_bookmgr.h"
#include "ui_cell_bookmgr.h"
#include "lib/sqlmgr.h"
#include "dlg_bookau.h"
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
        m_model.setHorizontalHeaderLabels(QStringList{"书籍ID","书名","作者","书籍大类","具体类型","价格","书籍总数","可借阅数目","书籍存放位置"});
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
    Dlg_bookAU dlg;
    dlg.exec();
    initPage();
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
        auto str = SqlMgr::getInstance()->delbook(id);
        QMessageBox::information(nullptr,"信息",str.isEmpty()?"删除成功":str);
        initPage();
    }
}

//修改图书
void Cell_Bookmgr::on_btu_update_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中书籍");
    }
    else
    {
        QStringList l;
        l<<m_model.item(r,0)->text();
        l<<m_model.item(r,1)->text();
        l<<m_model.item(r,2)->text();
        l<<m_model.item(r,3)->text();
        l<<m_model.item(r,4)->text();
        l<<m_model.item(r,5)->text();
        l<<m_model.item(r,6)->text();
        l<<m_model.item(r,7)->text();
        l<<m_model.item(r,8)->text();
        l<<"";
        Dlg_bookAU dlg(l);
        auto id = m_model.item(r,0)->text();
        dlg.setType(id.toInt());
        dlg.exec();
        initPage();
    }

}


void Cell_Bookmgr::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where title like '%%1%' "
                              "or book_id like '%%1%' "
                              "or author like '%%1%' "
                              "or category1 like '%%1%' "
                              "or category2 like '%%1%'").arg(arg1);
    initPage(strCond);
}

