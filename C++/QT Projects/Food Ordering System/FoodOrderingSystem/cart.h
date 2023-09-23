#ifndef CART_H
#define CART_H

#include <QDialog>

namespace Ui {
class Cart;
}

class Cart : public QDialog
{
    Q_OBJECT

public:
    explicit Cart(QString*,int,int,int,QWidget *parent = nullptr);
    ~Cart();

private slots:
    void on_cartLabel_linkActivated(const QString &link);

    void on_BuyButton_clicked();

    void on_RechargeButton_clicked();



private:
    Ui::Cart *ui;
    int n;
    int total;
    int Accbalance;
    int *userbal;
    QString *arr;
};

#endif // CART_H
