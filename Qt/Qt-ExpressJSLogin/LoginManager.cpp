#include "LoginManager.h"
#include <QDebug>

LoginManager::LoginManager()
{

}

void LoginManager::setLoginPageRef(QObject * _loginPage){
    loginPage = _loginPage;
}

bool LoginManager::loginCheck(QString id, QString password){
    qDebug()<<"LoginChecking! id: "<<id<<"password: "<<password;
    return loginRequester->requestLogin(id,password);;
}

void LoginManager::setLoginRequesterRef(LoginRequester * _loginRequester){
    loginRequester = _loginRequester;
}
