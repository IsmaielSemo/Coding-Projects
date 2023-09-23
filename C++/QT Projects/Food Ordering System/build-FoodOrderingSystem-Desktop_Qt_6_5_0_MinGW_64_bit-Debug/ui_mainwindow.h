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
    QPushButton *SignInButton;
    QLineEdit *NameEdit;
    QLineEdit *PasswordEdit;
    QLabel *Namelabel;
    QLabel *Passwordlabel;
    QLabel *Balancelabel;
    QLabel *logInStatus;
    QLabel *BalanceStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignInButton = new QPushButton(centralwidget);
        SignInButton->setObjectName("SignInButton");
        SignInButton->setGeometry(QRect(150, 150, 101, 31));
        NameEdit = new QLineEdit(centralwidget);
        NameEdit->setObjectName("NameEdit");
        NameEdit->setGeometry(QRect(150, 90, 113, 20));
        PasswordEdit = new QLineEdit(centralwidget);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setGeometry(QRect(150, 120, 113, 20));
        Namelabel = new QLabel(centralwidget);
        Namelabel->setObjectName("Namelabel");
        Namelabel->setGeometry(QRect(50, 90, 71, 20));
        Passwordlabel = new QLabel(centralwidget);
        Passwordlabel->setObjectName("Passwordlabel");
        Passwordlabel->setGeometry(QRect(50, 120, 91, 20));
        Balancelabel = new QLabel(centralwidget);
        Balancelabel->setObjectName("Balancelabel");
        Balancelabel->setGeometry(QRect(50, 230, 91, 20));
        logInStatus = new QLabel(centralwidget);
        logInStatus->setObjectName("logInStatus");
        logInStatus->setGeometry(QRect(36, 200, 311, 20));
        BalanceStatus = new QLabel(centralwidget);
        BalanceStatus->setObjectName("BalanceStatus");
        BalanceStatus->setGeometry(QRect(146, 230, 61, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
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
        SignInButton->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        Namelabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        Passwordlabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Balancelabel->setText(QCoreApplication::translate("MainWindow", "Balance:", nullptr));
        logInStatus->setText(QString());
        BalanceStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
