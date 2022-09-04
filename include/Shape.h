#ifndef HOMEWORK_29_4_2_SHAPE_H
#define HOMEWORK_29_4_2_SHAPE_H
#include <iostream>
#include <string>
using namespace std;
struct BoundingBox{
    double height;
    double width;
};

class Shape {
private:
    double a, b, c, d;
    double squareShape;
    string shapeType;

public:
    Shape(double _a, double _b, double _c, double _d, string _shapeType) : a(_a), b(_b), c(_c), d(_d), shapeType(_shapeType)
    {};
    virtual double square() = 0;
    virtual BoundingBox dimension() = 0;
    virtual string type() = 0;
    static void printParams(Shape* shape);

    int getA() const;
    void setA(double a);

    double getB() const;
    void setB(double b);

    double getC() const;
    void setC(double c);

    int getD() const;
    void setD(double d);

    //void setSquare(double _square);
};
#endif //HOMEWORK_29_4_2_SHAPE_H
