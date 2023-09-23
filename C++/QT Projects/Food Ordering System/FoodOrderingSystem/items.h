#ifndef ITEMS_H
#define ITEMS_H

#include <QMainWindow>
#include "cart.h"

namespace Ui {
class Items;
}

class Items : public QMainWindow
{
    Q_OBJECT

public:
    explicit Items(int,QWidget *parent = nullptr);
    ~Items();


private slots:
    void on_AddtoCartButton_clicked();




    void on_CHICKENcomboBox_currentTextChanged(const QString &arg1);

    void on_MEATcomboBox_currentTextChanged(const QString &arg1);



    void on_viewCartButton_clicked();

private:
    Ui::Items *ui;
    QString ChickenOptionsName[3];
    int ChickenPrice[3];
    QString MeatOptionsName[3];
    int MeatPrice[3];
    int count = 0;
    int k;
    int p = 0;
    int *b;
    QString *addedItems;
};

#endif // ITEMS_H
