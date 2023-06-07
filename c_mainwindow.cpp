
#include "mainwindow.h"
#include "loginwindow.h"

c_mainwindow::c_mainwindow()
{
    productlist = nullptr;
    userlist = nullptr;

    loggeduser = nullptr;
    wmain = nullptr;

}

c_mainwindow::~c_mainwindow() {}

void c_mainwindow::launchmainwindow()  {

    wmain = new MainWindow();

    wmain->setWindowTitle(QString::fromStdString("Music Management Store"));
    qDebug() << "finito login";
    wmain->show();

    if(loggeduser == nullptr)
    {
        this->launchLogin();
    }

}

void c_mainwindow::launchLogin() {

    wlogin = new loginwindow();

    wlogin->setWindowTitle(QString::fromStdString("Login"));
    connect(wlogin,SIGNAL(trylogin(QString,QString)),this,SLOT(login(QString,QString)));

    wlogin->exec();
}


void c_mainwindow::login(const QString &username, const QString &password) {

    /*User u("","user","user");
    User a("","admin","admin");
    qDebug() << "dentro a login";
    list<User> UserList;
    UserList.insertBack(u);
    UserList.insertBack(a);



    if((username == QString::fromStdString(u.getUsername())) && ( password == QString::fromStdString(u.getPassword())))
    {
        QMessageBox msgBox;
        msgBox.setText("Login Avvenuto");
        msgBox.exec();

        wlogin->close();

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Login NON Avvenuto");
        msgBox.exec();

        wlogin->clearF();
    }*/

    QMessageBox msgBox;
    msgBox.setText("Login Avvenuto");
    msgBox.exec();

    wlogin->close();

}
