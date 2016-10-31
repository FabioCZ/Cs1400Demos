#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    Rectangle r1(20);

    Rectangle r2(10,15);

    r1.print();
    cout << "Perimiter is: " << r1.calculatePerimiter() << endl;
    cout << "Area is: " << r1.calculateArea() << endl;

    r2.print();
    cout << "Perimiter is: " << r2.calculatePerimiter() << endl;
    cout << "Area is: " << r2.calculateArea() << endl;
    return 0;
}