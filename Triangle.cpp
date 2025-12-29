#include "Triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

Triangle::Triangle(double x, double y, double z) {
    a = x; b = y; c = z;
}

double Triangle::perimeter() {
    return a + b + c;
}

double Triangle::area() {
    double s = perimeter() / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::draw() {
    cout << "  *  " << endl;
    cout << " *** " << endl;
    cout << "*****" << endl;
}
