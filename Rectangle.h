#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape2D.h"

class Rectangle : public Shape2D {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);
    double area();
    double perimeter();
    void draw();
};

#endif
