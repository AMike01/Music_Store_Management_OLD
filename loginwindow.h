#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include<QDialog>
#include<QGridLayout>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QVBoxLayout>
#include<QRegularExpressionValidator>
#include<QString>
#include<QMessageBox>

class loginwindow : public QDialog
{
private:
    Q_OBJECT
    QGridLayout * gridLogin;
    QLineEdit * tUsername;
    QLineEdit * tPassword;
    QLabel * lUsername;
    QLabel * lPassword;
    QPushButton * bLogin;
    QVBoxLayout * layoutLogin;

public:
    loginwindow();
    void clearF();

public slots:
    void emitlogin();

signals:
    void trylogin(const QString&, const QString&);
};

#endif // LOGINWINDOW_H
