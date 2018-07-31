#include "loginuimanager.h"
#include <QGuiApplication>
#include <QDebug>
#include <QQmlContext>
#include <QQmlEngine>
#include <QObject>
#include <QQmlComponent>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlEngine engine;
    QQmlContext * context = engine.rootContext();

    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/LoginPage.qml")));
    QObject * window = component.create();

    return app.exec();
}
