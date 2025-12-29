#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(double r) {
    radius = r;
}

double Circle::area() {
    return 3.14 * radius * radius;
}

double Circle::perimeter() {
    return 2 * 3.14 * radius;
}

void Circle::draw() {
    cout << "  ***  " << endl;
    cout << " *   * " << endl;
    cout << "  ***  " << endl;
}
