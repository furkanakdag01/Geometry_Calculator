#ifndef CUBE_H
#define CUBE_H

#include "Shape3D.h"

class Cube : public Shape3D {
private:
    double side;

public:
    Cube(double s);
    double volume();
    double surfaceArea();
    void draw();
};

#endif
