#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram(double b, double h, double s) {
    base = b;
    height = h;
    side = s;
}

double Parallelogram::area() {
    return base * height;
}

double Parallelogram::perimeter() {
    return 2 * (base + side);
}

void Parallelogram::draw() {
    cout << "Parallelogram (symbolic)\n";
}
