#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"

using namespace std;


int main() {
    Rectangle rectangle{};
    rectangle.setWight(10);

    cout << rectangle.getWight();

    return 0;
}