#include <iostream>
#include "include/Triangle.h"
#include "include/Circle.h"
int main() {
    Triangle* triangle = new Triangle(3,5,8,"Triangle");
    Shape::printParams(triangle);

    Circle* circle = new Circle(3, "Circle");
    Shape::printParams(circle);
    return 0;
}
