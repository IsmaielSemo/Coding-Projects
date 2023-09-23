/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QLabel *cartLabel;
    QLabel *label;
    QLabel *priceLabel;
    QLabel *label_2;
    QLabel *balanceLabel;
    QPushButton *BuyButton;
    QPushButton *RechargeButton;
    QLineEdit *RechargeLineEdit;
    QLabel *PurchaseStatus;
    QLabel *label_3;

    void setupUi(QDialog *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName("Cart");
        Cart->resize(400, 300);
        cartLabel = new QLabel(Cart);
        cartLabel->setObjectName("cartLabel");
        cartLabel->setGeometry(QRect(10, 20, 381, 161));
        label = new QLabel(Cart);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 200, 41, 20));
        priceLabel = new QLabel(Cart);
        priceLabel->setObjectName("priceLabel");
        priceLabel->setGeometry(QRect(60, 200, 51, 20));
        label_2 = new QLabel(Cart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 230, 101, 20));
        balanceLabel = new QLabel(Cart);
        balanceLabel->setObjectName("balanceLabel");
        balanceLabel->setGeometry(QRect(140, 230, 111, 20));
        BuyButton = new QPushButton(Cart);
        BuyButton->setObjectName("BuyButton");
        BuyButton->setGeometry(QRect(290, 190, 80, 21));
        RechargeButton = new QPushButton(Cart);
        RechargeButton->setObjectName("RechargeButton");
        RechargeButton->setGeometry(QRect(10, 260, 121, 31));
        RechargeLineEdit = new QLineEdit(Cart);
        RechargeLineEdit->setObjectName("RechargeLineEdit");
        RechargeLineEdit->setGeometry(QRect(160, 270, 221, 20));
        PurchaseStatus = new QLabel(Cart);
        PurchaseStatus->setObjectName("PurchaseStatus");
        PurchaseStatus->setGeometry(QRect(6, 210, 251, 20));
        label_3 = new QLabel(Cart);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(6, 0, 51, 20));

        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QDialog *Cart)
    {
        Cart->setWindowTitle(QCoreApplication::translate("Cart", "Dialog", nullptr));
        cartLabel->setText(QString());
        label->setText(QCoreApplication::translate("Cart", "Total:", nullptr));
        priceLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Cart", "Account Balance:", nullptr));
        balanceLabel->setText(QString());
        BuyButton->setText(QCoreApplication::translate("Cart", "Buy Items", nullptr));
        RechargeButton->setText(QCoreApplication::translate("Cart", "Recharge Balance", nullptr));
        PurchaseStatus->setText(QString());
        label_3->setText(QCoreApplication::translate("Cart", "Items:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
