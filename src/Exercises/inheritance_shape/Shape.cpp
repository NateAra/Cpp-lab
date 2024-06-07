#include "Shape.h"

const std::string &Shape::getBackground() const {
    return background;
}

void Shape::setBackground(const std::string &background) {
    Shape::background = background;
}
