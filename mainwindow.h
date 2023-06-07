#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QTableView>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QApplication>
#include <QDir>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include "product.h";
#include "list.h";
#include "user.h";


class MainWindow : public QMainWindow
{
    Q_OBJECT

private:

    list products;
    user *loggedUser;
    QAction *apriAction;
	QAction *nuovoAction;
	QAction *salvaAction;
	QAction *esciAction;
    QWidget *centralWidget;
    QTableView *productTable;
    QPushButton *loginButton;
    QPushButton *logoutButton;
    

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void AggiungiBiglietto();
    void EliminaBiglietto();
    void ModificaBiglietto();
    void ApriXML();
    void SalvaXML();



};
#endif // MAINWINDOW_H
