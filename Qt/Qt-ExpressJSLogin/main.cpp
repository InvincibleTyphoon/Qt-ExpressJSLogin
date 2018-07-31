#include "loginuimanager.h"
#include <QGuiApplication>
#include <QDebug>
#include <QQmlContext>
#include <QQmlEngine>
#include <QObject>
#include <QQmlComponent>
#include "LoginManager.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    LoginManager loginManager;

    QQmlEngine engine;
    QQmlContext * context = engine.rootContext();

    //make loginManager accessible from .QML files
    context->setContextProperty("loginManager",&loginManager);

    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/LoginPage.qml")));
    QObject * window = component.create();

    return app.exec();
}
