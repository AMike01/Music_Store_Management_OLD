#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWidow(parent)
{
    setWindowTitle("Music Management Store");
    setFixedHeight(650);
    setFixedWidth(1000);
    

    
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_button_clicked()
{

}

