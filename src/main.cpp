#include <iostream>
#include "vector"
#include "classes/Rectangle.h"

using namespace std;

void createRectangle() {
    try {
        Rectangle react;
        react.setWidth(-1);
    } catch (const invalid_argument& ex) {
        cout << "Close the file" << endl;
        throw;
    }
}

void doWork() {
    createRectangle();
}

int main() {
    try {
        doWork();
    } catch (const exception& ex) {
        cout << ex.what();
    }

    return 0;
}