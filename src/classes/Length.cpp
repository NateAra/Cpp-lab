#include "Length.h"
#include "compare"

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

std::strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}
