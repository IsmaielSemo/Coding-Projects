/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *NameLabel;
    QLabel *NumberLabel;
    QLabel *BalanceLabel;
    QPushButton *DepositButton;
    QPushButton *WithdrawButton;
    QPushButton *ClearButton;
    QPushButton *ViewTransactionsButton;
    QLineEdit *textline;
    QLabel *BalanceLabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(331, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        NameLabel = new QLabel(centralwidget);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setGeometry(QRect(30, 40, 151, 16));
        NumberLabel = new QLabel(centralwidget);
        NumberLabel->setObjectName("NumberLabel");
        NumberLabel->setGeometry(QRect(30, 60, 171, 16));
        BalanceLabel = new QLabel(centralwidget);
        BalanceLabel->setObjectName("BalanceLabel");
        BalanceLabel->setGeometry(QRect(30, 90, 91, 16));
        DepositButton = new QPushButton(centralwidget);
        DepositButton->setObjectName("DepositButton");
        DepositButton->setGeometry(QRect(10, 130, 80, 18));
        WithdrawButton = new QPushButton(centralwidget);
        WithdrawButton->setObjectName("WithdrawButton");
        WithdrawButton->setGeometry(QRect(10, 170, 80, 18));
        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(180, 170, 80, 18));
        ViewTransactionsButton = new QPushButton(centralwidget);
        ViewTransactionsButton->setObjectName("ViewTransactionsButton");
        ViewTransactionsButton->setGeometry(QRect(89, 210, 111, 20));
        textline = new QLineEdit(centralwidget);
        textline->setObjectName("textline");
        textline->setGeometry(QRect(170, 130, 113, 20));
        BalanceLabel_2 = new QLabel(centralwidget);
        BalanceLabel_2->setObjectName("BalanceLabel_2");
        BalanceLabel_2->setGeometry(QRect(140, 90, 191, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 331, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NameLabel->setText(QCoreApplication::translate("MainWindow", "Client Name : Ismaiel", nullptr));
        NumberLabel->setText(QCoreApplication::translate("MainWindow", "Account Number : 11234 ", nullptr));
        BalanceLabel->setText(QCoreApplication::translate("MainWindow", "Account Balance", nullptr));
        DepositButton->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        WithdrawButton->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ViewTransactionsButton->setText(QCoreApplication::translate("MainWindow", "View Transactions", nullptr));
        BalanceLabel_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
