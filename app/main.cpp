#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QDebug>
#include <examplelib.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath(":/");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("app", "Main");

    Example myExample("dupa");
    qDebug() << "Example:" << myExample.name();

    return app.exec();
}
