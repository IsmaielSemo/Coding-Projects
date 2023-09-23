#ifndef TRANSACTIONSHISTORY_H
#define TRANSACTIONSHISTORY_H

#include <QDialog>

namespace Ui {
class TransactionsHistory;
}

class TransactionsHistory : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionsHistory(QString*,int,QWidget *parent = nullptr);
    ~TransactionsHistory();

private:
    Ui::TransactionsHistory *ui;
};

#endif // TRANSACTIONSHISTORY_H
