#include "Rectangle.h"
#include <iostream>

void Rectangle::draw() {
    std::cout << "Drawing a rectangle" << std::endl;
    std::cout << "Dimensions: " << width << ", " << height << std::endl;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getWight() {
    return width;
}

void Rectangle::setWight(int width) {
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
    setWight(width);
    setHeight(height);
}
