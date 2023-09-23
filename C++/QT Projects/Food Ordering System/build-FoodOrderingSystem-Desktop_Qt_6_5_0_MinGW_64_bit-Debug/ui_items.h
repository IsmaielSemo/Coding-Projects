/********************************************************************************
** Form generated from reading UI file 'items.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMS_H
#define UI_ITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Items
{
public:
    QWidget *centralwidget;
    QLabel *Chickenlabel;
    QLabel *Meatlabel;
    QLabel *ItemPriceLabel;
    QLabel *NumberofItemsLabel;
    QLabel *BalanceLabel2;
    QPushButton *AddtoCartButton;
    QLabel *PriceLabel;
    QLabel *numberitemsLabel;
    QLabel *Balanceval;
    QComboBox *CHICKENcomboBox;
    QComboBox *MEATcomboBox;
    QPushButton *viewCartButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Items)
    {
        if (Items->objectName().isEmpty())
            Items->setObjectName("Items");
        Items->resize(800, 600);
        centralwidget = new QWidget(Items);
        centralwidget->setObjectName("centralwidget");
        Chickenlabel = new QLabel(centralwidget);
        Chickenlabel->setObjectName("Chickenlabel");
        Chickenlabel->setGeometry(QRect(0, 20, 111, 21));
        Meatlabel = new QLabel(centralwidget);
        Meatlabel->setObjectName("Meatlabel");
        Meatlabel->setGeometry(QRect(310, 20, 101, 20));
        ItemPriceLabel = new QLabel(centralwidget);
        ItemPriceLabel->setObjectName("ItemPriceLabel");
        ItemPriceLabel->setGeometry(QRect(0, 170, 121, 20));
        NumberofItemsLabel = new QLabel(centralwidget);
        NumberofItemsLabel->setObjectName("NumberofItemsLabel");
        NumberofItemsLabel->setGeometry(QRect(0, 210, 181, 20));
        BalanceLabel2 = new QLabel(centralwidget);
        BalanceLabel2->setObjectName("BalanceLabel2");
        BalanceLabel2->setGeometry(QRect(0, 270, 161, 20));
        AddtoCartButton = new QPushButton(centralwidget);
        AddtoCartButton->setObjectName("AddtoCartButton");
        AddtoCartButton->setGeometry(QRect(320, 170, 101, 21));
        PriceLabel = new QLabel(centralwidget);
        PriceLabel->setObjectName("PriceLabel");
        PriceLabel->setGeometry(QRect(110, 170, 121, 20));
        numberitemsLabel = new QLabel(centralwidget);
        numberitemsLabel->setObjectName("numberitemsLabel");
        numberitemsLabel->setGeometry(QRect(130, 210, 191, 16));
        Balanceval = new QLabel(centralwidget);
        Balanceval->setObjectName("Balanceval");
        Balanceval->setGeometry(QRect(140, 270, 51, 16));
        CHICKENcomboBox = new QComboBox(centralwidget);
        CHICKENcomboBox->setObjectName("CHICKENcomboBox");
        CHICKENcomboBox->setGeometry(QRect(100, 20, 121, 22));
        MEATcomboBox = new QComboBox(centralwidget);
        MEATcomboBox->setObjectName("MEATcomboBox");
        MEATcomboBox->setGeometry(QRect(400, 20, 111, 21));
        viewCartButton = new QPushButton(centralwidget);
        viewCartButton->setObjectName("viewCartButton");
        viewCartButton->setGeometry(QRect(70, 240, 80, 18));
        Items->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Items);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Items->setMenuBar(menubar);
        statusbar = new QStatusBar(Items);
        statusbar->setObjectName("statusbar");
        Items->setStatusBar(statusbar);

        retranslateUi(Items);

        QMetaObject::connectSlotsByName(Items);
    } // setupUi

    void retranslateUi(QMainWindow *Items)
    {
        Items->setWindowTitle(QCoreApplication::translate("Items", "MainWindow", nullptr));
        Chickenlabel->setText(QCoreApplication::translate("Items", "Chicken Options", nullptr));
        Meatlabel->setText(QCoreApplication::translate("Items", "Meat Options", nullptr));
        ItemPriceLabel->setText(QCoreApplication::translate("Items", "Item Price", nullptr));
        NumberofItemsLabel->setText(QCoreApplication::translate("Items", "Number of added items", nullptr));
        BalanceLabel2->setText(QCoreApplication::translate("Items", "Account Balance: ", nullptr));
        AddtoCartButton->setText(QCoreApplication::translate("Items", "Add to Cart", nullptr));
        PriceLabel->setText(QString());
        numberitemsLabel->setText(QString());
        Balanceval->setText(QString());
        viewCartButton->setText(QCoreApplication::translate("Items", "ViewCart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Items: public Ui_Items {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMS_H
