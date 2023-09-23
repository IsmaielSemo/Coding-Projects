#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "items.h"

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
    void on_SignInButton_clicked();

private:
    Ui::MainWindow *ui;
    QString name[5];
    QString password[5];
    int Balance[5];
    //QString ChickenOptionsName[3];
    //int ChickenPrice[3];
    //QString MeatOptionsName[3];
    //int MeatPrice[3];
    Items *items;


};
#endif // MAINWINDOW_H
