#include "items.h"
#include "ui_items.h"
#include "cart.h"

Items::Items(int ai,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Items)
{
    ui->setupUi(this);

    k = ai;

    ChickenOptionsName[0] = "Crispy";
    ChickenOptionsName[1] = "Grilled";
    ChickenOptionsName[2] = "Boiled";

    ChickenPrice[0] = 25;
    ChickenPrice[1] = 50;
    ChickenPrice[2] = 75;

    MeatOptionsName[0] = "Medium Well";
    MeatOptionsName[1] = "Medium Rare";
    MeatOptionsName[2] = "Cooked";

    MeatPrice[0] = 100;
    MeatPrice[1] = 150;
    MeatPrice[2] = 200;

    b = new int[4];
    b[0] = 1000;
    b[1] = 2500;
    b[2] = 200;
    b[3] = 650;
    b[4] = 800;

    addedItems = new QString [1000];


    ui ->CHICKENcomboBox->addItem("");
    ui->CHICKENcomboBox->addItem(ChickenOptionsName[0]);
    ui->CHICKENcomboBox->addItem(ChickenOptionsName[1]);
    ui->CHICKENcomboBox->addItem(ChickenOptionsName[2]);

    ui ->MEATcomboBox->addItem("");
    ui ->MEATcomboBox->addItem(MeatOptionsName[0]);
    ui ->MEATcomboBox->addItem(MeatOptionsName[1]);
    ui ->MEATcomboBox->addItem(MeatOptionsName[2]);

    ui->PriceLabel->setText("");

    ui->Balanceval->setText(QString::number(b[k]));
}

Items::~Items()
{
    delete ui;
}

void Items::on_CHICKENcomboBox_currentTextChanged(const QString &arg1)
{
    int index;
    if(arg1 == ""){
        ui->PriceLabel->setText("");
    }
    else{
        for(int i = 0; i < 3; i++){
            if(ChickenOptionsName[i] == arg1)
                    index = i;
        }
        ui->PriceLabel->setText(QString ::number(ChickenPrice[index]));
    }
}





void Items::on_MEATcomboBox_currentTextChanged(const QString &arg1)
{
    int index;
    if(arg1 == ""){
        ui->PriceLabel->setText("");
    }
    else{
        for(int i = 0; i < 3; i++){
            if(MeatOptionsName[i] == arg1)
                    index = i;
        }
        ui->PriceLabel->setText(QString ::number(MeatPrice[index]));
    }
}






void Items::on_AddtoCartButton_clicked()
{
    ui->ItemPriceLabel->setText("Item Price");
    QString a = ui->CHICKENcomboBox->currentText();
    QString b = ui ->MEATcomboBox->currentText();
    if(a == "" && b == ""){
        ui->ItemPriceLabel->setText("Choose an item first");
    }
    else{
        if(a != "" ){
            int cindex;
            for(int i = 0; i < 3; i++){
                if(ChickenOptionsName[i] == a)
                        cindex = i;
            }
            ui->PriceLabel->setText(QString ::number(ChickenPrice[cindex]));
            addedItems[count] = a + " " + QString ::number(ChickenPrice[cindex]);
            count++;
            ui->numberitemsLabel->setText(QString::number(count));
            p+= ChickenPrice[cindex];


        }
        if(b != ""){
            int mindex;
            for(int j = 0; j < 3; j++){
                if(MeatOptionsName[j] == b)
                        mindex = j;
            }
            ui->PriceLabel->setText(QString ::number(MeatPrice[mindex]));
            addedItems[count] = b + " " + QString ::number(MeatPrice[mindex]) ;
            count++;
            ui->numberitemsLabel->setText(QString::number(count));
            p+= MeatPrice[mindex];


        }
    }
}









void Items::on_viewCartButton_clicked()
{
    Cart c (addedItems,count,p,k);
    c.setModal(true);
    c.exec();

}

