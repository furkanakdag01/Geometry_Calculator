#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Shape2D.h"

class Parallelogram : public Shape2D {
private:
    double base, height, side;

public:
    Parallelogram(double b, double h, double s);
    double area();
    double perimeter();
    void draw();
};

#endif
