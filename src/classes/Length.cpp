#include "Length.h"
#include "compare"

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

std::ostream &operator<<(std::ostream &out, const Length &length) {
    return out << length.getValue();
}

std::istream &operator>>(std::istream &in, Length &length) {
    int value;
    in >> value;
    length.setValue(value);
    return in;
}