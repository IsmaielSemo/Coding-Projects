#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "transactionshistory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    transactionArr = new QString[10];



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DepositButton_clicked()
{
   QString S= ui->BalanceLabel_2->text(); //current
   int currb = S.toInt();
   QString S2= ui->textline->text(); //amount
   int amount = S2.toInt();
   ui->BalanceLabel_2->setText(QString::number (currb + amount));
   transactionArr[transactionsCount] = "Deposit " +S2;
   transactionsCount++;



}


void MainWindow::on_WithdrawButton_clicked()
{
    QString S= ui->BalanceLabel_2->text(); //current
    int currb = S.toInt();
    QString S2= ui->textline->text(); //amount
    int amount = S2.toInt();
    ui->BalanceLabel_2->setText(QString::number (currb - amount));
    transactionArr[transactionsCount] = "Withdraw " +S2;
    transactionsCount++;

}


void MainWindow::on_ClearButton_clicked()
{
    ui->textline->setText(QString::number (0));
}


void MainWindow::on_ViewTransactionsButton_clicked()
{
    TransactionsHistory Thistory (transactionArr,transactionsCount);
    Thistory.setModal(true);
    Thistory.exec();

}

