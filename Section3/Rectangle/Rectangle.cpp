//
// Created by gottl on 10/31/2016.
//
#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(float side) {
    //TODO check if w and h are negative
    width = side;
    height = side;
}

Rectangle::Rectangle(float w, float h)
{
    //TODO check if w and h are negative
    width = w;
    height = h;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::getHeight() {
    return height;
}

float Rectangle::calculateArea() {
    return height * width;
}

float Rectangle::calculatePerimeter() {
    return height * 2 + width * 2;
}

void Rectangle::print() {
    cout << "Rectangle is " << width << " by "  << height << endl;
}
