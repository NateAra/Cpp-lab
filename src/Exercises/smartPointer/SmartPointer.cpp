#include "SmartPointer.h"
#include "iostream"

using namespace std;

SmartPointer::SmartPointer(int *ptr) : ptr{ptr} {
    cout << "Constructor is called" << endl;
}

SmartPointer::~SmartPointer() {
    cout << "Destructor is called" << endl;
    delete ptr;
    ptr = nullptr;
}

int &SmartPointer::operator*() {
    return *ptr;
}
