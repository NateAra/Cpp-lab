#include "Widget.h"
#include "iostream"

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}

void Widget::draw() const {
    std::cout << "Drawing a Widget" << std::endl;
}
