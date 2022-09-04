#include "../include/Triangle.h"

Triangle::Triangle(double _a, double _b, double _c, string _shapeType) : Shape(3,5,6, 0, "Triangle") {
    if(_a>0){ this->a = _a;}
    else{this->a = 1.0;}
    if (_b>0){ this->b = _b;}
    else{this->b = 1.0;}
    if (_c>0){ this->c = _c;}
    else{this->c = 1.0;}
    this->shapeType = _shapeType;


}
double Triangle::square(){
    double p = (this->a + this->b + this->c)/2;

    return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
}

BoundingBox Triangle::dimension() {
    BoundingBox dim;
    dim.height = (2*square())/this->a;
    dim.width = this->a;
    return dim;
}

string Triangle::type() {
    return this->shapeType;
}



