#include <iostream>
#include "triangle.h"

int main() {
    Triangle myTriangle;

    std::cout << "Vertices del triangulo:\n";
    std::cout << "Vertice 1: (" << myTriangle.getVertex1().getX() << ", " << myTriangle.getVertex1().getY() << ")\n";
    std::cout << "Vertice 2: (" << myTriangle.getVertex2().getX() << ", " << myTriangle.getVertex2().getY() << ")\n";
    std::cout << "Vertice 3: (" << myTriangle.getVertex3().getX() << ", " << myTriangle.getVertex3().getY() << ")\n";

    std::cout << "Perimetro del triangulo: " << myTriangle.perimeter() << std::endl;
    std::cout << "Area del triangulo: " << myTriangle.area() << std::endl;

    return 0;
}
