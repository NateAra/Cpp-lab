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
        throw std::invalid_argument("The Width cannot be negative!");
    if (width > 100)
        throw std::out_of_range("The Width cannot be greater than 100!");
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
    objectCount++;
    std::cout << "Constructing a Rectangle" << std::endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const std::string &color) : Rectangle(width, height) {
    std::cout << "Constructing Rectangle With Color." << std::endl;
    this->color = color;
}

Rectangle::Rectangle(const Rectangle &source) {
    std::cout << "Rectangle Copied" << std::endl;
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
}

int Rectangle::objectCount = 0;

int Rectangle::getObjectCount() {
    return objectCount;
}

