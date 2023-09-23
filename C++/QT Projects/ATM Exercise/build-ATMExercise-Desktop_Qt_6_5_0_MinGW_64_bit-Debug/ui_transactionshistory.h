/********************************************************************************
** Form generated from reading UI file 'transactionshistory.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSHISTORY_H
#define UI_TRANSACTIONSHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TransactionsHistory
{
public:
    QTextEdit *textBox;

    void setupUi(QDialog *TransactionsHistory)
    {
        if (TransactionsHistory->objectName().isEmpty())
            TransactionsHistory->setObjectName("TransactionsHistory");
        TransactionsHistory->resize(400, 300);
        textBox = new QTextEdit(TransactionsHistory);
        textBox->setObjectName("textBox");
        textBox->setGeometry(QRect(60, 20, 311, 231));

        retranslateUi(TransactionsHistory);

        QMetaObject::connectSlotsByName(TransactionsHistory);
    } // setupUi

    void retranslateUi(QDialog *TransactionsHistory)
    {
        TransactionsHistory->setWindowTitle(QCoreApplication::translate("TransactionsHistory", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionsHistory: public Ui_TransactionsHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSHISTORY_H
