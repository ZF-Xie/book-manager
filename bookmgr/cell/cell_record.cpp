#include "cell_record.h"
#include "ui_cell_record.h"
#include"lib/sqlmgr.h"
Cell_Record::Cell_Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Record)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Record::~Cell_Record()
{
    delete ui;
}

void Cell_Record::initPage(QString strCondition)
{
    auto l=SqlMgr::getInstance()->getRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"书籍ID","书名","作者","书籍大类","具体类型","价格","书籍总数","可借阅数目"});
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

void Cell_Record::on_pushButton_2_clicked()
{
    SqlMgr::getInstance()->clearRecord();
    initPage();
}


void Cell_Record::on_lineEdit_textChanged(const QString &arg1)
{
    initPage(arg1);
}

