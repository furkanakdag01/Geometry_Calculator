#ifndef SPHERE_H
#define SPHERE_H

#include "Shape3D.h"

class Sphere : public Shape3D {
private:
    double radius;

public:
    Sphere(double r);
    double volume();
    double surfaceArea();
    void draw();
};

#endif
