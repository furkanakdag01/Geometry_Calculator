#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape2D.h"

class Circle : public Shape2D {
private:
    double radius;

public:
    Circle(double r);
    double area();
    double perimeter();
    void draw();
};

#endif
