#include "TextBox.h"

const std::string &TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const std::string &val) {
    this->value = val;
}
