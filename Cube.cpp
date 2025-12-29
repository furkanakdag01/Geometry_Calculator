#include "Cube.h"
#include <iostream>

using namespace std;

Cube::Cube(double s) {
    side = s;
}

double Cube::volume() {
    return side * side * side;
}

double Cube::surfaceArea() {
    return 6 * side * side;
}

void Cube::draw() {
    cout << "Cube (3D)\n";
}
