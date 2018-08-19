#include "LoginRequester.h"
#include <QEventLoop>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

//singletone patterns
LoginRequester* LoginRequester::instance = new LoginRequester();

LoginRequester* LoginRequester::getInstance(){
    return instance;
}

LoginRequester::LoginRequester()
{
    requestUrl = "http://localhost:3000/login/requestLogin";
    manager = new QNetworkAccessManager();
}

bool LoginRequester::requestLogin(QString id, QString password){
    //for synchronous execution
    QEventLoop eventLoop;
    QByteArray postData;
    postData.append("id=" + id +"&");
    postData.append("password=" + password);
    request.setUrl(requestUrl);
    reply = manager->post(request,postData);
    connect(manager,SIGNAL(finished(QNetworkReply*)), &eventLoop,SLOT(quit()));

    qDebug()<<"wait for answer";

    // wait for reply
    eventLoop.exec();
    qDebug()<<"Received answer";

    if(reply->error()){
        qDebug() <<"reply error !";
        return NULL;
    }

    //parsing
    QString answer = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    qDebug()<<doc.object()["success"].toBool();
    return doc.object()["success"].toBool();
}
