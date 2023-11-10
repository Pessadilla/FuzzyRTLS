#include "findcoordinate.h"
#include "circleintersection.h"
#include "pointcomparer.h"
#include "trianglecenter.h"

FindCoordinate::FindCoordinate()
{


}

double FindCoordinate::getx1(double x1, double y1, double r1, double x2, double y2, double r2){

    double xa1;

    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();

    PointComparer comparer;
    double greaterY = comparer.GetPointWithGreaterY(intersection.GetY1(), intersection.GetY2());
    if (greaterY==1)
        xa1=intersection.GetY1();
    else
        xa1=intersection.GetY2();

    if(intersection.HasIntersection())
    return xa1;
    else
    return NULL;
}

double FindCoordinate::gety1(double x1, double y1, double r1, double x2, double y2, double r2){

    double ya1;

    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();

    PointComparer comparer;
    double greaterY = comparer.GetPointWithGreaterY(intersection.GetY1(), intersection.GetY2());
    if (greaterY==1)
        ya1=intersection.GetX1();
    else
        ya1=intersection.GetX2();

    if(intersection.HasIntersection())
        return ya1;
    else
        return NULL;
}
double FindCoordinate::getx2(double x1, double y1, double r1, double x3, double y3, double r3){

    double xa2;

    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();

    PointComparer comparer2;
    double greaterY = comparer2.GetPointWithSmallerY(intersection2.GetY1(), intersection2.GetY2());
    if (greaterY==1)
        xa2=intersection2.GetY1();
    else
        xa2=intersection2.GetY2();
    if(intersection2.HasIntersection())
        return xa2;
    else
        return NULL;
}

double FindCoordinate::gety2(double x1, double y1, double r1, double x3, double y3, double r3){

    double ya2;

    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();

    PointComparer comparer2;
    double greaterY = comparer2.GetPointWithSmallerY(intersection2.GetY1(), intersection2.GetY2());
    if (greaterY==1)
        ya2=intersection2.GetX1();
    else
        ya2=intersection2.GetX2();
    if(intersection2.HasIntersection())
        return ya2;
    else
        return NULL;
}

double FindCoordinate::getx3(double x2, double y2, double r2, double x3, double y3, double r3){

        double xa3;

        CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
        intersection3.CalculateIntersection();

        PointComparer comparer3;
        double greaterY = comparer3.GetPointWithGreaterY(intersection3.GetY1(), intersection3.GetY2());
        if (greaterY==1)
            xa3=intersection3.GetY1();
        else
            xa3=intersection3.GetY2();
        if(intersection3.HasIntersection())
            return xa3;
        else
            return NULL;
}

double FindCoordinate::gety3(double x2, double y2, double r2, double x3, double y3, double r3){

        double ya3;

        CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
        intersection3.CalculateIntersection();

        PointComparer comparer3;
        double greaterY = comparer3.GetPointWithGreaterY(intersection3.GetY1(), intersection3.GetY2());
        if (greaterY==1)
            ya3=intersection3.GetX1();
        else
            ya3=intersection3.GetX2();
        if(intersection3.HasIntersection())
            return ya3;
        else
            return NULL;
}

double FindCoordinate::getx1alt(double x1, double y1, double r1, double x2, double y2, double r2){

        double xa1;

        CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
        intersection.CalculateIntersection();

        PointComparer comparer;
        double greaterY = comparer.GetPointWithSmallerY(intersection.GetY1(), intersection.GetY2());
        if (greaterY==1)
            xa1=intersection.GetY1();
        else
            xa1=intersection.GetY2();

        if(intersection.HasIntersection())
            return xa1;
        else
            return NULL;
}

double FindCoordinate::gety1alt(double x1, double y1, double r1, double x2, double y2, double r2){

        double ya1;

        CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
        intersection.CalculateIntersection();

        PointComparer comparer;
        double greaterY = comparer.GetPointWithSmallerY(intersection.GetY1(), intersection.GetY2());
        if (greaterY==1)
            ya1=intersection.GetX1();
        else
            ya1=intersection.GetX2();

        if(intersection.HasIntersection())
            return ya1;
        else
            return NULL;
}
double FindCoordinate::getx2alt(double x1, double y1, double r1, double x3, double y3, double r3){

        double xa2;

        CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
        intersection2.CalculateIntersection();

        PointComparer comparer2;
        double greaterY = comparer2.GetPointWithGreaterY(intersection2.GetY1(), intersection2.GetY2());
        if (greaterY==1)
            xa2=intersection2.GetY1();
        else
            xa2=intersection2.GetY2();
        if(intersection2.HasIntersection())
            return xa2;
        else
            return NULL;
}

double FindCoordinate::gety2alt(double x1, double y1, double r1, double x3, double y3, double r3){

        double ya2;

        CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
        intersection2.CalculateIntersection();

        PointComparer comparer2;
        double greaterY = comparer2.GetPointWithGreaterY(intersection2.GetY1(), intersection2.GetY2());
        if (greaterY==1)
            ya2=intersection2.GetX1();
        else
            ya2=intersection2.GetX2();
        if(intersection2.HasIntersection())
            return ya2;
        else
            return NULL;
}

double FindCoordinate::getx3alt(double x2, double y2, double r2, double x3, double y3, double r3){

        double xa3;

        CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
        intersection3.CalculateIntersection();

        PointComparer comparer3;
        double greaterY = comparer3.GetPointWithSmallerY(intersection3.GetY1(), intersection3.GetY2());
        if (greaterY==1)
            xa3=intersection3.GetY1();
        else
            xa3=intersection3.GetY2();
        if(intersection3.HasIntersection())
            return xa3;
        else
            return NULL;
}

double FindCoordinate::gety3alt(double x2, double y2, double r2, double x3, double y3, double r3){

        double ya3;

        CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
        intersection3.CalculateIntersection();

        PointComparer comparer3;
        double greaterY = comparer3.GetPointWithSmallerY(intersection3.GetY1(), intersection3.GetY2());
        if (greaterY==1)
            ya3=intersection3.GetX1();
        else
            ya3=intersection3.GetX2();
        if(intersection3.HasIntersection())
            return ya3;
        else
            return NULL;
}
double FindCoordinate::LocateX(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3){

    double xa1=getx1(x1,y1,r1,x2,y2,r2);
    double ya1=gety1(x1,y1,r1,x2,y2,r2);
    double xa2=getx2(x1,y1,r1,x3,y3,r3);
    double ya2=gety2(x1,y1,r1,x3,y3,r3);
    double xa3=getx3(x2,y2,r2,x3,y3,r3);
    double ya3=gety3(x2,y2,r2,x3,y3,r3);


    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();


    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();


    CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
    intersection3.CalculateIntersection();


    if (intersection.HasIntersection()&intersection2.HasIntersection()&intersection3.HasIntersection())
    {
        TriangleCenter center(xa1, ya1, xa2, ya2, xa3, ya3);
        center.CalculateCenter();
        return center.GetCenterX();
    }
    else
    return NULL;
}

double FindCoordinate::LocateY(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3){

    double xa1=getx1(x1,y1,r1,x2,y2,r2);
    double ya1=gety1(x1,y1,r1,x2,y2,r2);
    double xa2=getx2(x1,y1,r1,x3,y3,r3);
    double ya2=gety2(x1,y1,r1,x3,y3,r3);
    double xa3=getx3(x2,y2,r2,x3,y3,r3);
    double ya3=gety3(x2,y2,r2,x3,y3,r3);


    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();


    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();


    CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
    intersection3.CalculateIntersection();


    if (intersection.HasIntersection()&intersection2.HasIntersection()&intersection3.HasIntersection())
    {
        TriangleCenter center(xa1, ya1, xa2, ya2, xa3, ya3);
        center.CalculateCenter();
        return center.GetCenterY();
    }
    else
    return NULL;
}

double FindCoordinate::LocateXalt(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3){

    double xa1=getx1alt(x1,y1,r1,x2,y2,r2);
    double ya1=gety1alt(x1,y1,r1,x2,y2,r2);
    double xa2=getx2alt(x1,y1,r1,x3,y3,r3);
    double ya2=gety2alt(x1,y1,r1,x3,y3,r3);
    double xa3=getx3alt(x2,y2,r2,x3,y3,r3);
    double ya3=gety3alt(x2,y2,r2,x3,y3,r3);


    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();


    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();


    CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
    intersection3.CalculateIntersection();


    if (intersection.HasIntersection()&intersection2.HasIntersection()&intersection3.HasIntersection())
    {
    TriangleCenter center(xa1, ya1, xa2, ya2, xa3, ya3);
    center.CalculateCenter();
    return center.GetCenterX();
    }
    else
    return NULL;
}

double FindCoordinate::LocateYalt(double x1, double y1, double r1, double x2, double y2, double r2, double x3, double y3, double r3){

    double xa1=getx1alt(x1,y1,r1,x2,y2,r2);
    double ya1=gety1alt(x1,y1,r1,x2,y2,r2);
    double xa2=getx2alt(x1,y1,r1,x3,y3,r3);
    double ya2=gety2alt(x1,y1,r1,x3,y3,r3);
    double xa3=getx3alt(x2,y2,r2,x3,y3,r3);
    double ya3=gety3alt(x2,y2,r2,x3,y3,r3);


    CircleIntersection intersection(x1, y1, r1, x2, y2, r2);
    intersection.CalculateIntersection();


    CircleIntersection intersection2(x1, y1, r1, x3, y3, r3);
    intersection2.CalculateIntersection();


    CircleIntersection intersection3(x2, y2, r2, x3, y3, r3);
    intersection3.CalculateIntersection();


    if (intersection.HasIntersection()&intersection2.HasIntersection()&intersection3.HasIntersection())
    {
    TriangleCenter center(xa1, ya1, xa2, ya2, xa3, ya3);
    center.CalculateCenter();
    return center.GetCenterY();
    }
    else
    return NULL;
}
