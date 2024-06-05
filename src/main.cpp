#include <iostream>
#include "classes/Rectangle.h"


using namespace std;


int main() {
    Rectangle rectangle[  ] = {
            {},
            {10, 20},
            {30, 40, "Black"}
    };

    rectangle[0].draw();

    for (Rectangle& rect : rectangle) {
        rect.draw();
    }

    return 0;
}