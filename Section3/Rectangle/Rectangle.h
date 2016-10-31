//
// Created by gottl on 10/31/2016.
//
#include <string>
#ifndef RECTANGLE_RECTANGLE_H
#define RECTANGLE_RECTANGLE_H

using namespace std;
class Rectangle
{
public:
    Rectangle(float side);
    Rectangle(float w, float h);

    float getWidth();
    float getHeight();

    float calculateArea();
    float calculatePerimeter();

    void print();
private:
    float width;
    float height;
};
#endif //RECTANGLE_RECTANGLE_H
