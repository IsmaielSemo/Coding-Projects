#include "cart.h"
#include "ui_cart.h"

Cart::Cart(QString *a, int i,int t,int BALANCE, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Cart)
{
    ui->setupUi(this);


    arr = new QString[1000];
    n = i;
    total = t;
    Accbalance = BALANCE;

    userbal[0] = 1000;
    userbal[1] = 2500;
    userbal[2] = 200;
    userbal[3] = 650;
    userbal[4] = 800;

    for(int j = 0; j < n; j++)
        arr[j] = a[j];
    for(int j = 0; j < n; j++)
     ui->cartLabel->setText(ui->cartLabel->text()+ arr[j] + "\n");
    ui->priceLabel->setText(QString::number(total));
    ui->balanceLabel->setText(QString::number(userbal[Accbalance]));

}

Cart::~Cart()
{
    delete ui;
}

void Cart::on_cartLabel_linkActivated(const QString &link)
{

}


void Cart::on_BuyButton_clicked()
{
    if(userbal[Accbalance] < total)
            ui->PurchaseStatus->setText("Sorry, you can't proceed without recharging your balance.");
    else{
        ui->PurchaseStatus->setText("Purchased successfully! Enjoy your meal :)");
        userbal[Accbalance] = userbal[Accbalance] - total;
        ui->balanceLabel->setText(QString::number(userbal[Accbalance]));
    }
}


void Cart::on_RechargeButton_clicked()
{
    QString charge = ui->RechargeLineEdit->text();
    int r = charge.toInt();
    if(r < 0){
        ui->RechargeLineEdit->setText("Can't enter a negative value");
    }
    else{
        userbal[Accbalance] = userbal[Accbalance] + r;
        ui->balanceLabel->setText(QString::number(userbal[Accbalance]));
        ui->RechargeLineEdit->setText("");
    }

}




