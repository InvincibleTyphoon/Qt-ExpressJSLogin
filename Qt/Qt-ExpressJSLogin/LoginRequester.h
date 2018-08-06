#ifndef LOGINREQUESTER_H
#define LOGINREQUESTER_H
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class LoginRequester : public QObject
{
    Q_OBJECT
public:
    LoginRequester();
    Q_INVOKABLE bool requestLogin(QString id, QString password);
private:
    QNetworkAccessManager * manager;
    QNetworkRequest request;
    QNetworkReply * reply;
    QString requestUrl;
};

#endif // LOGINREQUESTER_H
