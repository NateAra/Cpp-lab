#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"

using namespace std;


int main() {
    Rectangle rectangle{};
    rectangle.width = 10;
    rectangle.height = 20;

    cout << rectangle.getArea();

    return 0;
}