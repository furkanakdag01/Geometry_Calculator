#include <iostream>

#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Ellipse.h"
#include "Parallelogram.h"
#include "Cube.h"
#include "Sphere.h"

using namespace std;

int main() {
    int choice;
    char cont;

    do {
        cout << "\n====== GEOMETRY CALCULATOR ======\n";
        cout << "----- 2D SHAPES -----\n";
        cout << "1. Rectangle\n";
        cout << "2. Square\n";
        cout << "3. Circle\n";
        cout << "4. Triangle\n";
        cout << "5. Ellipse\n";
        cout << "6. Parallelogram\n";
        cout << "----- 3D SHAPES -----\n";
        cout << "7. Cube\n";
        cout << "8. Sphere\n";
        cout << "0. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {

        // ================== 2D SHAPES ==================
        case 1: {
            double w, h;
            cout << "Enter width: ";
            cin >> w;
            cout << "Enter height: ";
            cin >> h;

            if (w <= 0 || h <= 0) {
                cout << "Invalid input! Values must be positive.\n";
                break;
            }

            Shape2D* shape = new Rectangle(w, h);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 2: {
            double s;
            cout << "Enter side length: ";
            cin >> s;

            if (s <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape2D* shape = new Square(s);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 3: {
            double r;
            cout << "Enter radius: ";
            cin >> r;

            if (r <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape2D* shape = new Circle(r);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 4: {
            double a, b, c;
            cout << "Enter three sides: ";
            cin >> a >> b >> c;

            if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
                cout << "Invalid triangle!\n";
                break;
            }

            Shape2D* shape = new Triangle(a, b, c);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 5: {
            double a, b;
            cout << "Enter major axis: ";
            cin >> a;
            cout << "Enter minor axis: ";
            cin >> b;

            if (a <= 0 || b <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape2D* shape = new Ellipse(a, b);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 6: {
            double base, height, side;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Enter side length: ";
            cin >> side;

            if (base <= 0 || height <= 0 || side <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape2D* shape = new Parallelogram(base, height, side);
            cout << "Area: " << shape->area() << endl;
            cout << "Perimeter: " << shape->perimeter() << endl;
            shape->draw();
            delete shape;
            break;
        }

        // ================== 3D SHAPES ==================
        case 7: {
            double e;
            cout << "Enter edge length: ";
            cin >> e;

            if (e <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape3D* shape = new Cube(e);
            cout << "Surface Area: " << shape->surfaceArea() << endl;
            cout << "Volume: " << shape->volume() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 8: {
            double r;
            cout << "Enter radius: ";
            cin >> r;

            if (r <= 0) {
                cout << "Invalid input!\n";
                break;
            }

            Shape3D* shape = new Sphere(r);
            cout << "Surface Area: " << shape->surfaceArea() << endl;
            cout << "Volume: " << shape->volume() << endl;
            shape->draw();
            delete shape;
            break;
        }

        case 0:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid selection!\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Program terminated.\n";
    return 0;
}
