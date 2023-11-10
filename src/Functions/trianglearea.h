#ifndef TRIANGLEAREA_H
#define TRIANGLEAREA_H

struct Point {
    double x;
    double y;
};

class triangleArea
{
public:
    triangleArea();

    static double calculateTriangleArea(const Point& A, const Point& B, const Point& C);
};

#endif // TRIANGLEAREA_H
