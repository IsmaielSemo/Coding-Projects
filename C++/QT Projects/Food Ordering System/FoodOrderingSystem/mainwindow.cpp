#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "items.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    name[0] = "Jana";
    name[1] = "Ismaiel";
    name[2] = "Mohamed";
    name[3] = "Karim";
    name[4] = "Ali";
    password[0] = "123";
    password[1] = "456";
    password[2] = "789";
    password[3] = "125";
    password[4] = "129";
    Balance[0] = 1000;
    Balance[1] = 2500;
    Balance[2] = 200;
    Balance[3] = 650;
    Balance[4] = 800;
}

MainWindow::~MainWindow()
{

    delete ui;

}


void MainWindow::on_SignInButton_clicked()
{
    QString n = ui ->NameEdit->text();
    QString p = ui ->PasswordEdit ->text();
    int accountindex;
    for(int i = 0; i < 5; i++){
        if(n != name[i]){
            if(i == 4){
                ui ->logInStatus->setText("Name does not exist");
                break;
            }
        }
        else if(n == name[i] && p != password[i]){
            ui ->logInStatus->setText("Name is correct but password does not exist");
            break;
        }
        else if(n == name[i] && p == password[i]){
            ui ->logInStatus->setText("Signed in successfully!");
            ui ->BalanceStatus->setText(QString :: number (Balance[i]));
            accountindex = i;
            Items *i1 = new Items(accountindex);
            i1->show();
            break;
        }
    }

}

