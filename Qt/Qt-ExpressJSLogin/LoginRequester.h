#ifndef LOGINREQUESTER_H
#define LOGINREQUESTER_H
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class LoginRequester : public QObject
{
    Q_OBJECT    // This macro should come first to be accessible from .qml files
public:
    LoginRequester();

    //Q_INVOKABLE macro makes method invokable from .qml files
    Q_INVOKABLE bool requestLogin(QString id, QString password);
private:
    QNetworkAccessManager * manager;
    QNetworkRequest request;
    QNetworkReply * reply;
    QString requestUrl;
};

#endif // LOGINREQUESTER_H
