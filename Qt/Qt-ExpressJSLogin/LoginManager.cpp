#include "LoginManager.h"

LoginManager::LoginManager()
{

}

void LoginManager::setLoginPageRef(QObject * _loginPage){
    loginPage = _loginPage;
}

bool LoginManager::loginCheck(QString& id, QString& password){
    return true;
}
