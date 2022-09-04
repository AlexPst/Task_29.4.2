
#include "../include/Shape.h"


void Shape::printParams(Shape* shape){

    cout<<"Type: "<<shape->type()<<endl;
    cout<<"Square: "<<shape->square()<<endl;
    cout<<"Width: "<<shape->dimension().width<<endl;
    cout<<"Height: "<<shape->dimension().height<<endl;
    cout<<endl;
}

int Shape::getA() const {
    return a;
}

void Shape::setA(double a) {
    Shape::a = a;
}

double Shape::getB() const {
    return b;
}

void Shape::setB(double b) {
    Shape::b = b;
}

double Shape::getC() const {
    return c;
}

void Shape::setC(double c) {
    Shape::c = c;
}

int Shape::getD() const {
    return d;
}

void Shape::setD(double d) {
    Shape::d = d;
};

