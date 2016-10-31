//
// Created by gottl on 10/31/2016.
//

#ifndef RECTANGLE_RECTANGLE_H
#define RECTANGLE_RECTANGLE_H
class Rectangle {
public:
    Rectangle(float side);
    Rectangle(float w, float h);

    float getWidth();
    float getHeight();

    float calculatePerimiter();
    float calculateArea();

    void print();
private:
    float width;
    float height;
};

#endif //RECTANGLE_RECTANGLE_H
