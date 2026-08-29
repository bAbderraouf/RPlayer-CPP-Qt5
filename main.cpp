#include "mainwindow.h"

#include <QApplication>

// afficher la version
#include <QVersionNumber>


// pour qml = cpp connection
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    // afficher la version
    qDebug() << QT_VERSION_STR;

    QApplication a(argc, argv);
    MainWindow w;

    // pour qml = cpp connection
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("w", &w);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    w.show();
    return a.exec();
}
