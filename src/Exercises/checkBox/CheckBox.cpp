#include "CheckBox.h"
#include "iostream"

void CheckBox::draw() const {
    std::cout << "Drawing a CheckBox" << std::endl;
}

CheckBox::~CheckBox() {
    std::cout << "Destructing CheckBox" << std::endl;
}
