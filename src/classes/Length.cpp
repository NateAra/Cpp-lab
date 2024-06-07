#include "Length.h"
#include "compare"
#include "iostream"

Length::Length(int value) : value(value) {}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    Length::value = value;
}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

std::strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

Length Length::operator+(const Length &other) const {
    return Length(value + other.value);
}

Length &Length::operator+=(const Length &other) {
    value += other.value;
    return *this;
}

Length &Length::operator=(const Length &other) {
    std::cout << "Object Assigned" << std::endl;
    value = other.value;
    return *this;
}

Length &Length::operator++() { // Prefix ++y
    value++;
    return *this;
}

Length Length::operator++(int) { // Postfix y++
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const {
    return value;
}

std::ostream &operator<<(std::ostream &out, const Length &length) {
    return out << length.getValue();
}

std::istream &operator>>(std::istream &in, Length &length) {
    int value;
    in >> value;
    length.setValue(value);
    return in;
}