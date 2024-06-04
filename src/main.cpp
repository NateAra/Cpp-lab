#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"
#include "Exercises/TextBox/TextBox.h"

using namespace std;


int main() {
    TextBox textBox{};
    textBox.setValue("Hello World");

    cout << textBox.getValue();

    return 0;
}