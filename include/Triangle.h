#ifndef HOMEWORK_29_4_2_TRIANGLE_H
#define HOMEWORK_29_4_2_TRIANGLE_H

#include "Shape.h"
#include <iostream>
#include <cmath>

class Triangle : public Shape{
private:
    double a;
    double b;
    double c;
    string shapeType;
public:
    Triangle(double _a, double _b, double _c, string _shapeType);
    double square() override;
    string type() override;
    BoundingBox dimension()override;
    //void printParams(Shape* shape);
};

#endif //HOMEWORK_29_4_2_TRIANGLE_H
