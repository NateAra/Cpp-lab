#include "Array.h"
#include "stdexcept"
Array::Array(size_t size) {
    value = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] value;
}

int &Array::operator[](size_t index) {
    if (index >= size)
        throw std::invalid_argument("Index");
    return value[index];
}
