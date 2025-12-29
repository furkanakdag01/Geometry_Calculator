#include "Sphere.h"
#include <iostream>

using namespace std;

Sphere::Sphere(double r) {
    radius = r;
}

double Sphere::volume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

double Sphere::surfaceArea() {
    return 4 * 3.14 * radius * radius;
}

void Sphere::draw() {
    cout << "Sphere (3D)\n";
}
