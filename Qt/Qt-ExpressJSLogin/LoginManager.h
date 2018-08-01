#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <QObject>


class LoginManager : public QObject
{
    // Without this keyword, this class is unaccessible from .qml files
    Q_OBJECT
public:
    LoginManager();

    Q_INVOKABLE void setLoginPageRef(QObject * _loginPage);

    Q_INVOKABLE bool loginCheck(QString id, QString password);
private:
    QObject* loginPage;
};

#endif // LOGINMANAGER_H
