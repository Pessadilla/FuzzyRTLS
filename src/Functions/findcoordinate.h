#ifndef FINDCOORDINATE_H
#define FINDCOORDINATE_H

#include <iostream>



class FindCoordinate
{
public:
    FindCoordinate();


    static double getx1(double x1, double y1, double r1, double x2, double y2, double r2);
    static double gety1(double x1, double y1, double r1, double x2, double y2, double r2);
    static double getx2(double x1, double y1, double r1, double x3, double y3, double r3);
    static double gety2(double x1, double y1, double r1, double x3, double y3, double r3);
    static double getx3(double x2, double y2, double r2, double x3, double y3, double r3);
    static double gety3(double x2, double y2, double r2, double x3, double y3, double r3);
    static double getx1alt(double x1, double y1, double r1, double x2, double y2, double r2);
    static double gety1alt(double x1, double y1, double r1, double x2, double y2, double r2);
    static double getx2alt(double x1, double y1, double r1, double x3, double y3, double r3);
    static double gety2alt(double x1, double y1, double r1, double x3, double y3, double r3);
    static double getx3alt(double x2, double y2, double r2, double x3, double y3, double r3);
    static double gety3alt(double x2, double y2, double r2, double x3, double y3, double r3);
    static double LocateX(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3);
    static double LocateY(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3);
    static double LocateXalt(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3);
    static double LocateYalt(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3);


};

#endif // FINDCOORDINATE_H
