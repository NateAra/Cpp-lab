#include "Rectangle.h"
#include <iostream>

void Rectangle::draw() const {
    std::cout << "Drawing a rectangle" << std::endl;
    std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea() const {
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw std::invalid_argument("Width");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw std::invalid_argument("Height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    std::cout << "Constructing a Rectangle" << std::endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const std::string &color) : Rectangle(width, height) {
    std::cout << "Constructing Rectangle With Color." << std::endl;
    this->color = color;
}
