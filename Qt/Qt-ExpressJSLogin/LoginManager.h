#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <QObject>
#include "LoginRequester.h"


class LoginManager : public QObject
{
    // Without this keyword, this class is unaccessible from .qml files
    Q_OBJECT
public:
    LoginManager();

    void setLoginRequesterRef(LoginRequester * _loginRequester);

    Q_INVOKABLE void setLoginPageRef(QObject * _loginPage);

    Q_INVOKABLE bool loginCheck(QString id, QString password);
private:
    QObject* loginPage;
    LoginRequester * loginRequester;
};

#endif // LOGINMANAGER_H
