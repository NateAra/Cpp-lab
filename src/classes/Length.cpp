#include "Length.h"

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}
