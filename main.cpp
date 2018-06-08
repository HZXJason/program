#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include"program.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
qmlRegisterType<client>("io.qt.program.client",1,0,"Myclient");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
