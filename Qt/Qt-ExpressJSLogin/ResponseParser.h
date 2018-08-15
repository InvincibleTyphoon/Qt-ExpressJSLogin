#ifndef RESPONSEPARSER_H
#define RESPONSEPARSER_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkReply>
#include "protocoldefinition.h"


class ResponseParser
{
public:
    ResponseParser();

    void processResponse(QNetworkReply* reply);

private:
    void loginResponseReceived(QJsonObject& json);
};

#endif // RESPONSEPARSER_H
