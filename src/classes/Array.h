#ifndef CPP_LAB_ARRAY_H
#define CPP_LAB_ARRAY_H

#include "cstddef"
#include "iostream"

class Array {
private:
    int* value;
    size_t size;

public:
    explicit Array(size_t size);
    ~Array();

    int& operator[](size_t index);
};


#endif
