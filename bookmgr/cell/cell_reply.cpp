#include "cell_reply.h"
#include "ui_cell_reply.h"

Cell_Reply::Cell_Reply(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Reply)
{
    ui->setupUi(this);
}

Cell_Reply::~Cell_Reply()
{
    delete ui;
}
<<<<<<< Updated upstream
=======

void Cell_Reply::on_lineEdit_textChanged(const QString &arg1)
{
    QString strCond=QString("where user_id like '%%1%' or content like '%%1%' or submit_date like '%%1%' or feedback.status like '%%1%'").arg(arg1);
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

>>>>>>> Stashed changes
