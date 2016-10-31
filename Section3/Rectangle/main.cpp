#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle r1(20);
    Rectangle r2(10,15);

    r1.print();
    cout << "Area of r1: " << r1.calculateArea() << endl;
    cout << "Perimeter of r1: " << r1.calculatePerimeter() << endl;

    r2.print();
    cout << "Area of r2: " << r2.calculateArea() << endl;
    cout << "Perimeter of r2: " << r2.calculatePerimeter() << endl;
    return 0;
}