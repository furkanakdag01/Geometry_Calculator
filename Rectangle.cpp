#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

void Rectangle::draw() {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++)
            cout << "* ";
        cout << endl;
    }
}
