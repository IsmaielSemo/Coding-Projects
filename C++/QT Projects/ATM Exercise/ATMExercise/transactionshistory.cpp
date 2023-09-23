#include "transactionshistory.h"
#include "ui_transactionshistory.h"

TransactionsHistory::TransactionsHistory(QString *a,int count,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransactionsHistory)

{
    ui->setupUi(this);
    for(int i = 0; i < count; i++){
        ui->textBox->append(a[i]);

    }

   ui->textBox->setReadOnly("true");
}


TransactionsHistory::~TransactionsHistory()
{
    delete ui;
}
