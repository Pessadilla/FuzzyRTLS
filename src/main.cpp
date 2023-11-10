// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <iostream>

#include "app_environment.h"
#include "import_qml_components_plugins.h"
#include "import_qml_plugins.h"

//#include "Functions/findcoordinate.h"
//#include "Functions/fuzzymodule.h"
//#include "Functions/outputparser.h"
//#include "Functions/trianglearea.h"
//#include "Functions/rssitodistance.h"
#include "Functions/comms.h"
#include "Functions/rtlsmodule.h"

//double RTLS1(double rssi1,double rssi2,double rssi3);
//double RTLS2(double rssi1,double rssi2,double rssi3);
//double RTLS3(double rssi1,double rssi2,double rssi3);

int main(int argc, char *argv[])
{

    set_qt_environment();

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Comms commsObject;

    engine.rootContext()->setContextProperty("commsObject",&commsObject);

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

    double rssi1=-53,rssi2=-57,rssi3=-61;

    double alt1=RTLSModule::RTLS1(rssi1,rssi2,rssi3);
    std::cout<<"alt1: "<<alt1<<std::endl;

    double alt2=RTLSModule::RTLS2(rssi1,rssi2,rssi3);
    std::cout<<"alt2: "<<alt2<<std::endl;

//    double alt3=RTLS3(rssi1,rssi2,rssi3);
//    std::cout<<"alt3: "<<alt3<<std::endl;



    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}

//double RTLS1(double rssi1,double rssi2,double rssi3){
//    double x1 = 0, y1 = 0, r1 = 6.26; // İlk çember
//    double x2 = 5.6, y2 = 5.8, r2 = 6.56; // İkinci çember
//    double x3 = 9.8, y3 = 0, r3 = 5.52; // Üçüncü çember


//    double dist1=RSSItoDistance::Distance1(rssi1);
//    double dist2=RSSItoDistance::Distance2(rssi2);
//    double dist3=RSSItoDistance::Distance3(rssi3);
//    std::cout<<"dist1 :"<<dist1<<" dist2: "<<dist2<<" dist3: "<<dist3<<std::endl;
//    r1=dist1;
//    r2=dist2;
//    r3=dist3;

//    double xa1=FindCoordinate::getx1(x1,y1,r1,x2,y2,r2);
//    double ya1=FindCoordinate::gety1(x1,y1,r1,x2,y2,r2);
//    double xa2=FindCoordinate::getx2(x1,y1,r1,x3,y3,r3);
//    double ya2=FindCoordinate::gety2(x1,y1,r1,x3,y3,r3);
//    double xa3=FindCoordinate::getx3(x2,y2,r2,x3,y3,r3);
//    double ya3=FindCoordinate::gety3(x2,y2,r2,x3,y3,r3);

//    std::cout<<"xa1: "<<xa1<<" ya1: "<< ya1<<" xa2: "<<xa2<<" ya2: "<< ya2<<" xa3: "<<xa3<<" ya3: "<< ya3<<std::endl;

//    double centerX=FindCoordinate::LocateX(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    double centerY=FindCoordinate::LocateY(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    std::cout<<"center X: "<<centerX<<" center Y: "<< centerY<<std::endl;

//    double area=triangleArea::calculateTriangleArea({xa1, ya1}, {xa2, ya2}, {xa3, ya3});
//    std::cout<<"area: "<<area<<std::endl;

//    std::string temp = fuzzymodule::fuzzyoutput(area);
//    std::cout<<"temp: "<<temp<<std::endl;

//    int i=0;
//    double aitlikler[5];
//    std::vector<std::string>aitlik=OutputParser::ParseOutput(temp);
//    for (const std::string& t : aitlik) {
//        std::cout << t << std::endl;
//        aitlikler[i]=std::atof(t.c_str());
//        i++;
//    }
//    double index=0;
//    double sira=0;
//    for (int j=0;j<5;j++)
//    {
//        if(aitlikler[j]>index)
//        {
//            index=aitlikler[j];
//            sira=j;
//        }
//    }
//    return sira;



//}

//double RTLS2(double rssi1,double rssi2,double rssi3){
//    double x1 = 0, y1 = 0, r1 = 6.26; // İlk çember
//    double x2 = 5.6, y2 = 5.8, r2 = 6.56; // İkinci çember
//    double x3 = 9.8, y3 = 0, r3 = 5.52; // Üçüncü çember


//    double dist1=RSSItoDistance::Distance1alt1(rssi1);
//    double dist2=RSSItoDistance::Distance2(rssi2);
//    double dist3=RSSItoDistance::Distance3(rssi3);
//    std::cout<<"dist1 :"<<dist1<<" dist2: "<<dist2<<" dist3: "<<dist3<<std::endl;
//    r1=dist1;
//    r2=dist2;
//    r3=dist3;

//    double xa1=FindCoordinate::getx1(x1,y1,r1,x2,y2,r2);
//    double ya1=FindCoordinate::gety1(x1,y1,r1,x2,y2,r2);
//    double xa2=FindCoordinate::getx2(x1,y1,r1,x3,y3,r3);
//    double ya2=FindCoordinate::gety2(x1,y1,r1,x3,y3,r3);
//    double xa3=FindCoordinate::getx3(x2,y2,r2,x3,y3,r3);
//    double ya3=FindCoordinate::gety3(x2,y2,r2,x3,y3,r3);

//    std::cout<<"xa1: "<<xa1<<" ya1: "<< ya1<<" xa2: "<<xa2<<" ya2: "<< ya2<<" xa3: "<<xa3<<" ya3: "<< ya3<<std::endl;

//    double centerX=FindCoordinate::LocateX(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    double centerY=FindCoordinate::LocateY(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    std::cout<<"center X: "<<centerX<<" center Y: "<< centerY<<std::endl;

//    double area=triangleArea::calculateTriangleArea({xa1, ya1}, {xa2, ya2}, {xa3, ya3});
//    std::cout<<"area: "<<area<<std::endl;

//    std::string temp = fuzzymodule::fuzzyoutput(area);
//    std::cout<<"temp: "<<temp<<std::endl;

//    int i=0;
//    double aitlikler[5];
//    std::vector<std::string>aitlik=OutputParser::ParseOutput(temp);
//    for (const std::string& t : aitlik) {
//        std::cout << t << std::endl;
//        aitlikler[i]=std::atof(t.c_str());
//        i++;
//    }
//    double index=0;
//    double sira=0;
//    for (int j=0;j<5;j++)
//    {
//        if(aitlikler[j]>index)
//        {
//            index=aitlikler[j];
//            sira=j;
//        }
//    }
//    return sira;
//}

//double RTLS3(double rssi1,double rssi2,double rssi3){
//    double x1 = 0, y1 = 0, r1 = 6.26; // İlk çember
//    double x2 = 5.6, y2 = 5.8, r2 = 6.56; // İkinci çember
//    double x3 = 9.8, y3 = 0, r3 = 5.52; // Üçüncü çember


//    double dist1=RSSItoDistance::Distance1(rssi1);
//    double dist2=RSSItoDistance::Distance2(rssi2);
//    double dist3=RSSItoDistance::Distance3(rssi3);
//    std::cout<<"dist1 :"<<dist1<<" dist2: "<<dist2<<" dist3: "<<dist3<<std::endl;
//    r1=dist1;
//    r2=dist2;
//    r3=dist3;

//    double xa1=FindCoordinate::getx1alt(x1,y1,r1,x2,y2,r2);
//    double ya1=FindCoordinate::gety1alt(x1,y1,r1,x2,y2,r2);
//    double xa2=FindCoordinate::getx2alt(x1,y1,r1,x3,y3,r3);
//    double ya2=FindCoordinate::gety2alt(x1,y1,r1,x3,y3,r3);
//    double xa3=FindCoordinate::getx3alt(x2,y2,r2,x3,y3,r3);
//    double ya3=FindCoordinate::gety3alt(x2,y2,r2,x3,y3,r3);

//    std::cout<<"xa1: "<<xa1<<" ya1: "<< ya1<<" xa2: "<<xa2<<" ya2: "<< ya2<<" xa3: "<<xa3<<" ya3: "<< ya3<<std::endl;

//    double centerX=FindCoordinate::LocateXalt(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    double centerY=FindCoordinate::LocateYalt(x1,y1,r1,x2,y2,r2,x3,y3,r3);
//    std::cout<<"center X: "<<centerX<<" center Y: "<< centerY<<std::endl;

//    double area=triangleArea::calculateTriangleArea({xa1, ya1}, {xa2, ya2}, {xa3, ya3});
//    std::cout<<"area: "<<area<<std::endl;

//    std::string temp = fuzzymodule::fuzzyoutput(area);
//    std::cout<<"temp: "<<temp<<std::endl;

//    int i=0;
//    double aitlikler[5];
//    std::vector<std::string>aitlik=OutputParser::ParseOutput(temp);
//    for (const std::string& t : aitlik) {
//        std::cout << t << std::endl;
//        aitlikler[i]=std::atof(t.c_str());
//        i++;
//    }
//    double index=0;
//    double sira=0;
//    for (int j=0;j<5;j++)
//    {
//        if(aitlikler[j]>index)
//        {
//            index=aitlikler[j];
//            sira=j;
//        }
//    }
//    return sira;
//}
