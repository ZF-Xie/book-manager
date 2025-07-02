#include "cell_usermgr.h"
#include "ui_cell_usermgr.h"
#include"lib/sqlmgr.h"
#include "dlg_userau.h"
#include <QFileDialog>
#include<QMessageBox>
Cell_UserMgr::Cell_UserMgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_UserMgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    initPage();

}

Cell_UserMgr::~Cell_UserMgr()
{
    delete ui;
}

void Cell_UserMgr::initPage(QString strCondition)
{
    {
        //查询数据库并显示
        auto l=SqlMgr::getInstance()->getUser(strCondition);
        m_model.clear();
        m_model.setHorizontalHeaderLabels(QStringList{"用户ID","用户名","权限","实名","电话号码","信用状态"});
        for(int i =0;i<l.size();i++)
        {
            QList<QStandardItem*> items;

            for(int j=0;j<l[i].size();j++)
            {
                if(l[i].size()==7)
                {
                    if(j<2||j>2)
                    {
                        items.append(new QStandardItem(l[i][j]));
                    }
                }
            }

            m_model.appendRow(items);
        }
    }
}



void Cell_UserMgr::on_btn_del_clicked()
{
    //删除用户
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中用户");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        SqlMgr::getInstance()->delUser(id);
        initPage();
    }

}

//增加用户
void Cell_UserMgr::on_btn_import_clicked()
{
    dlg_userADD dlg;
    dlg.exec();
    initPage();
}


void Cell_UserMgr::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where user_name like '%%1%' or user_id like '%%1%'").arg(arg1);
    initPage(strCond);
}

//修改用户
void Cell_UserMgr::on_btn_change_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中用户");
    }
    else
    {
        QStringList l;
        l<<m_model.item(r,0)->text();

        l<<m_model.item(r,1)->text();

        l<<"******";
        l<<m_model.item(r,2)->text();

        l<<m_model.item(r,3)->text();

        l<<m_model.item(r,4)->text();

        l<<m_model.item(r,5)->text();

        l<<"";
        dlg_userADD dlg(l);
        auto id = m_model.item(r,0)->text();
        dlg.setType(id.toInt());
        dlg.exec();
        initPage();
    }
}

