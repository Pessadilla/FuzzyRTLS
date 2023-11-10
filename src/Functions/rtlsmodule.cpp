#include "rtlsmodule.h"
#include "rssitodistance.h"
#include "findcoordinate.h"
#include "fuzzymodule.h"
#include "trianglearea.h"
#include "outputparser.h"

RTLSModule::RTLSModule()
{

}
double RTLSModule::RTLS1(double rssi1,double rssi2,double rssi3){
    double x1 = 0, y1 = 0, r1 = 6.26; // İlk çember
    double x2 = 5.6, y2 = 5.8, r2 = 6.56; // İkinci çember
    double x3 = 9.8, y3 = 0, r3 = 5.52; // Üçüncü çember


    double dist1=RSSItoDistance::Distance1(rssi1);
    double dist2=RSSItoDistance::Distance2(rssi2);
    double dist3=RSSItoDistance::Distance3(rssi3);
    std::cout<<"dist1 :"<<dist1<<" dist2: "<<dist2<<" dist3: "<<dist3<<std::endl;
    r1=dist1;
    r2=dist2;
    r3=dist3;

    double xa1=FindCoordinate::getx1(x1,y1,r1,x2,y2,r2);
    double ya1=FindCoordinate::gety1(x1,y1,r1,x2,y2,r2);
    double xa2=FindCoordinate::getx2(x1,y1,r1,x3,y3,r3);
    double ya2=FindCoordinate::gety2(x1,y1,r1,x3,y3,r3);
    double xa3=FindCoordinate::getx3(x2,y2,r2,x3,y3,r3);
    double ya3=FindCoordinate::gety3(x2,y2,r2,x3,y3,r3);

    std::cout<<"xa1: "<<xa1<<" ya1: "<< ya1<<" xa2: "<<xa2<<" ya2: "<< ya2<<" xa3: "<<xa3<<" ya3: "<< ya3<<std::endl;

    double centerX=FindCoordinate::LocateX(x1,y1,r1,x2,y2,r2,x3,y3,r3);
    double centerY=FindCoordinate::LocateY(x1,y1,r1,x2,y2,r2,x3,y3,r3);
    std::cout<<"center X: "<<centerX<<" center Y: "<< centerY<<std::endl;

    double area=triangleArea::calculateTriangleArea({xa1, ya1}, {xa2, ya2}, {xa3, ya3});
    std::cout<<"area: "<<area<<std::endl;

    std::string temp = fuzzymodule::fuzzyoutput(area);
    std::cout<<"temp: "<<temp<<std::endl;

    int i=0;
    double aitlikler[5];
    std::vector<std::string>aitlik=OutputParser::ParseOutput(temp);
    for (const std::string& t : aitlik) {
        std::cout << t << std::endl;
        aitlikler[i]=std::atof(t.c_str());
        i++;
    }
    double index=0;
    double sira=0;
    for (int j=0;j<5;j++)
    {
        if(aitlikler[j]>index)
        {
            index=aitlikler[j];
            sira=j;
        }
    }
    return centerX;



}

double RTLSModule::RTLS2(double rssi1,double rssi2,double rssi3){
    double x1 = 0, y1 = 0, r1 = 6.26; // İlk çember
    double x2 = 5.6, y2 = 5.8, r2 = 6.56; // İkinci çember
    double x3 = 9.8, y3 = 0, r3 = 5.52; // Üçüncü çember


    double dist1=RSSItoDistance::Distance1alt1(rssi1);
    double dist2=RSSItoDistance::Distance2(rssi2);
    double dist3=RSSItoDistance::Distance3(rssi3);
    std::cout<<"dist1 :"<<dist1<<" dist2: "<<dist2<<" dist3: "<<dist3<<std::endl;
    r1=dist1;
    r2=dist2;
    r3=dist3;

    double xa1=FindCoordinate::getx1(x1,y1,r1,x2,y2,r2);
    double ya1=FindCoordinate::gety1(x1,y1,r1,x2,y2,r2);
    double xa2=FindCoordinate::getx2(x1,y1,r1,x3,y3,r3);
    double ya2=FindCoordinate::gety2(x1,y1,r1,x3,y3,r3);
    double xa3=FindCoordinate::getx3(x2,y2,r2,x3,y3,r3);
    double ya3=FindCoordinate::gety3(x2,y2,r2,x3,y3,r3);

    std::cout<<"xa1: "<<xa1<<" ya1: "<< ya1<<" xa2: "<<xa2<<" ya2: "<< ya2<<" xa3: "<<xa3<<" ya3: "<< ya3<<std::endl;

    double centerX=FindCoordinate::LocateX(x1,y1,r1,x2,y2,r2,x3,y3,r3);
    double centerY=FindCoordinate::LocateY(x1,y1,r1,x2,y2,r2,x3,y3,r3);
    std::cout<<"center X: "<<centerX<<" center Y: "<< centerY<<std::endl;

    double area=triangleArea::calculateTriangleArea({xa1, ya1}, {xa2, ya2}, {xa3, ya3});
    std::cout<<"area: "<<area<<std::endl;

    std::string temp = fuzzymodule::fuzzyoutput(area);
    std::cout<<"temp: "<<temp<<std::endl;

    int i=0;
    double aitlikler[5];
    std::vector<std::string>aitlik=OutputParser::ParseOutput(temp);
    for (const std::string& t : aitlik) {
        std::cout << t << std::endl;
        aitlikler[i]=std::atof(t.c_str());
        i++;
    }
    double index=0;
    double sira=0;
    for (int j=0;j<5;j++)
    {
        if(aitlikler[j]>index)
        {
            index=aitlikler[j];
            sira=j;
        }
    }
    return centerY;
}
