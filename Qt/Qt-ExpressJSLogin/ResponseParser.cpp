#include "ResponseParser.h"

ResponseParser::ResponseParser()
{

}
void ResponseParser::processResponse(QNetworkReply* reply){
    QString answer = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject obj = doc.object();
    int msgId = obj["msgId"].toInt();
    switch(msgId){
    case RESPONSE_LOGIN_RESULT:
        loginResponseReceived(obj);
        break;
    }

}

void ResponseParser::loginResponseReceived(QJsonObject& json){

}
