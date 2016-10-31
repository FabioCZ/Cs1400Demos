//
// Created by gottl on 10/31/2016.
//
#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(float side) {
    width = side;
    height = side;
}

Rectangle::Rectangle(float w, float h){
    width = w;
    height = h;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::getHeight() {
    return height;
}

float Rectangle::calculatePerimiter() {
    return 2 * height + 2 * width;
}

float Rectangle::calculateArea() {
    return height * width;
}

void Rectangle::print() {
    cout << "Rectangle is " << width << " by " << height << endl;
}

