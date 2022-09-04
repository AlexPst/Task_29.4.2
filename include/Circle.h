
#ifndef HOMEWORK_29_4_2_CIRCLE_H
#define HOMEWORK_29_4_2_CIRCLE_H
#include <iostream>
#include "Shape.h"
#include <cmath>

class Circle : public Shape{
private:
    const double pi = 3.14;
    double diam;
    double squareCircle;
    string shapeType;
public:
    Circle(double _diam, string _shapeType);
    double square() override;
    string type() override;
    BoundingBox dimension() override;
};

#endif //HOMEWORK_29_4_2_CIRCLE_H
