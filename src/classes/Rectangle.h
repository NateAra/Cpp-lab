#ifndef CPP_LAB_RECTANGLE_H
#define CPP_LAB_RECTANGLE_H
#include "string"
#include "../Exercises/inheritance_shape/Shape.h"


class Rectangle : public Shape{
private:
    int width = 0;
    int height = 0;
    std::string color;
    static int objectCount;

public:
    Rectangle() = default;
    Rectangle(const Rectangle &source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string &color);

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);
    static int getObjectCount();
};


#endif
