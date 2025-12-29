#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape2D.h"

class Ellipse : public Shape2D {
private:
    double a, b;

public:
    Ellipse(double a, double b);
    double area();
    double perimeter();
    void draw();
};

#endif
