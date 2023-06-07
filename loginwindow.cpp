#include "loginwindow.h"
#include <QObject>
#include <QRegularExpressionValidator>

// Constructor
loginwindow::loginwindow(){
    setWindowTitle("Login");
    setFixedHeight(140);
    setFixedWidth(280);
    //setWindowFlags(windowFlags()  & ~Qt::WindowContextHelpButtonHint);

    lUsername = new QLabel("Username");
    lPassword = new QLabel("Password");
    tUsername = new QLineEdit();
    tPassword = new QLineEdit();

    tUsername->setPlaceholderText("Inserire username");
    tPassword->setPlaceholderText("Inserire password");


    QRegularExpression rx("[A-Za-z0-9]{1,16}");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    tUsername->setValidator(validator);

    tPassword->setEchoMode(QLineEdit::Password);

    bLogin = new QPushButton("Accedi");
    bLogin->setStyleSheet("back-ground color: black; color: white;  border-radius:15px; font: bold 10px; min-width: 5em; padding: 6px");

    bGuest = new QPushButton("Accedi come ospite");
    bGuest->setStyleSheet("back-ground color: black; color: white;  border-radius:15px; font: bold 10px; min-width: 5em; padding: 6px");


    gridLogin=new QGridLayout;
    gridLogin->addWidget(lUsername, 0,0);
    gridLogin->addWidget(tUsername,0,1);
    gridLogin->addWidget(lPassword,1,0);
    gridLogin->addWidget(tPassword,1,1);
    gridLogin->addWidget(bLogin,2,1);
    gridLogin->addWidget(bGuest,2,1);

    layoutLogin=new QVBoxLayout();
    layoutLogin->addLayout(gridLogin);
    setLayout(layoutLogin);

    setWindowFlags(windowFlags() & ~Qt::WindowCloseButtonHint);

    connect(bLogin,SIGNAL(clicked()),this,SLOT(emitlogin()));
    }

// Class methods

void loginwindow::clearF(){
    tPassword->clear();
    tUsername->clear();
}


// Slot
void loginwindow::emitlogin(){
    qDebug() << "pulsante login premuto" << tUsername->text();
    emit trylogin(tUsername->text(),tPassword->text());
}

void loginwindow::emitlogin_guest(){
    qDebug() << "pulsante guest premuto";
    emit guest_login();
}

