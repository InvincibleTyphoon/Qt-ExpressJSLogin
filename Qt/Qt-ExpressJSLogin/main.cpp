#include "loginuimanager.h"
#include <QGuiApplication>
#include <QDebug>
#include <QQmlContext>
#include <QQmlEngine>
#include <QObject>
#include <QQmlComponent>
#include "LoginRequester.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlEngine engine;
    QQmlContext * context = engine.rootContext();

    //make loginManager accessible from .QML files
    context->setContextProperty("loginRequester",LoginRequester::getInstance());

    //load .qml file and instantiate
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/LoginPage.qml")));
    QObject * window = component.create();

    return app.exec();
}
