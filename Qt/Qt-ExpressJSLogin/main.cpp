#include "loginuimanager.h"
#include <QGuiApplication>
#include <QDebug>
#include <QQmlContext>
#include <QQmlEngine>
#include <QObject>
#include <QQmlComponent>
#include "LoginManager.h"
#include "LoginRequester.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    LoginManager loginManager;
    LoginRequester loginRequester;
    loginManager.setLoginRequesterRef(&loginRequester);

    QQmlEngine engine;
    QQmlContext * context = engine.rootContext();

    //make loginManager accessible from .QML files
    context->setContextProperty("loginManager",&loginManager);
    context->setContextProperty("loginRequester",&loginRequester);

    //load .qml file and instantiate
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/LoginPage.qml")));
    QObject * window = component.create();

    return app.exec();
}
