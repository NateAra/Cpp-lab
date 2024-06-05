#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"
#include "Exercises/TextBox/TextBox.h"

using namespace std;


int main() {
    Rectangle first{10, 20};
    Rectangle second{30, 40};

    cout << Rectangle::getObjectCount() << endl;

    return 0;
}