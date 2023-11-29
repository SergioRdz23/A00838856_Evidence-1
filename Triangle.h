#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class Triangle {
public:
    Triangle();

    Point getVertex1() const;
    Point getVertex2() const;
    Point getVertex3() const;

    void setVertices(const Point& v1, const Point& v2, const Point& v3);

    double perimeter() const;
    double area() const;

private:
    Point vertex1;
    Point vertex2;
    Point vertex3;
};

#endif
