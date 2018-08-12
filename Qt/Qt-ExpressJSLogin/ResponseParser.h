#ifndef RESPONSEPARSER_H
#define RESPONSEPARSER_H
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkReply>


class ResponseParser
{
public:
    ResponseParser();

    void processResponse(QNetworkReply reply);
};

#endif // RESPONSEPARSER_H
