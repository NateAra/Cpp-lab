#include <iostream>
#include "vector"
#include "classes/Rectangle.h"

using namespace std;

int main() {
    try {
        cout << "Width: ";
        int width;
        cin >> width;

        Rectangle rect;
        rect.setWidth(width);
    } catch (const logic_error& ex) {
        cout << ex.what();
    }

    return 0;
}