#include "Ellipse.h"
#include <iostream>
#include <cmath>

using namespace std;

Ellipse::Ellipse(double x, double y) {
    a = x;
    b = y;
}

double Ellipse::area() {
    return 3.14 * a * b;
}

double Ellipse::perimeter() {
    return 2 * 3.14 * sqrt((a*a + b*b) / 2);
}

void Ellipse::draw() {
    cout << "Ellipse (symbolic)\n";
}
