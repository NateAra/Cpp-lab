#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"
#include "Exercises/TextBox/TextBox.h"

using namespace std;


int main() {
    Rectangle rectangle{10, 20};

    cout << rectangle.getWight();

    return 0;
}