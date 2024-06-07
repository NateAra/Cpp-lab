#include "TextBox.h"
#include "iostream"

const std::string &TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const std::string &val) {
    this->value = val;
}

void TextBox::draw() const {
    std::cout << "Drawing a TextBox" << std::endl;
}

TextBox::~TextBox() {
    std::cout << "Destructing TextBox" << std::endl;
}
