#include "triangle.h"
#include <cmath>

Triangle::Triangle() {
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}

Point Triangle::getVertex1() const {
    return vertex1;
}

Point Triangle::getVertex2() const {
    return vertex2;
}

Point Triangle::getVertex3() const {
    return vertex3;
}

void Triangle::setVertices(const Point& v1, const Point& v2, const Point& v3) {
    vertex1 = v1;
    vertex2 = v2;
    vertex3 = v3;
}

double Triangle::perimeter() const {
    double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
    double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
    double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));

    return side1 + side2 + side3;
}

double Triangle::area() const {
    double s = perimeter() / 2;
    double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
    double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
    double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));

    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
