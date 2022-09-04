#include "../include/Circle.h"

Circle::Circle(double _diam, std::string _shapeType): Shape(3,0,0,0, "Circle") {
    if(_diam>0){ this->diam = _diam;}
    else{this->diam = 1.0;}

    this->shapeType = _shapeType;
}

double Circle::square() {
    return pi*((pow(diam,2))/4);
}

BoundingBox Circle::dimension() {
    BoundingBox dim;
    dim.height = this->diam;
    dim.width = this->diam;
    return dim;
}

string Circle::type() {
    return this->shapeType;
}