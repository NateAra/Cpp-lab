#ifndef CPP_LAB_RECTANGLE_H
#define CPP_LAB_RECTANGLE_H
#include "string"


class Rectangle {
private:
    int width = 0;
    int height = 0;
    std::string color;

public:
    Rectangle() = default;
    Rectangle(const Rectangle &source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string &color);

    void draw() const;
    int getArea() const;
    int getWidth() const;
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
};


#endif
