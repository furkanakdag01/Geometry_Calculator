#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape2D.h"

class Triangle : public Shape2D {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z);
    double area();
    double perimeter();
    void draw();
};

#endif
