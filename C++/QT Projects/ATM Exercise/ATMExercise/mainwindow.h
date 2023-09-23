#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_DepositButton_clicked();

    void on_WithdrawButton_clicked();

    void on_ClearButton_clicked();

    void on_ViewTransactionsButton_clicked();

private:
    Ui::MainWindow *ui;
    QString *transactionArr;
    int transactionsCount = 0;
};
#endif // MAINWINDOW_H
