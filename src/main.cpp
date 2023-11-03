// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "app_environment.h"
#include "import_qml_components_plugins.h"
#include "import_qml_plugins.h"

#include "Functions/findcoordinate.h"

int main(int argc, char *argv[])
{
    set_qt_environment();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:Main/main.qml"_qs);
    QObject::connect(
        &engine, &QQmlApplicationEngine::objectCreated, &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.addImportPath(QCoreApplication::applicationDirPath() + "/qml");
    engine.addImportPath(":/");

    engine.load(url);

    double x1 = 0.0, y1 = 0.0, r1 = 6.26; // İlk çember
    double x2 = 5.0, y2 = 10.0, r2 = 6.56; // İkinci çember
    double x3 = 10.0, y3 = 5.0, r3 = 5.52; // Üçüncü çember



    FindCoordinate(x1,y1,r1,x2,y2,r2,x3,y3,r3);

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
