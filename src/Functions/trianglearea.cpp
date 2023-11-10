#include "trianglearea.h"
#include <iostream>
#include <cmath>

triangleArea::triangleArea()
{

}

double triangleArea::calculateTriangleArea(const Point& A, const Point& B, const Point& C)
{
    double side1 = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    double side2 = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
    double side3 = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));

    double s=(side1 + side2 + side3)/2;

    double area= sqrt(s * (s-side1)*(s-side2)*(s-side3) );

    return area;
}
