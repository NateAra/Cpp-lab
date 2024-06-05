#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"
#include "Exercises/TextBox/TextBox.h"

using namespace std;


int main() {
    TextBox textBox1{};
    textBox1.setValue("Hello Nate!");

    TextBox textBox2("Hello World!");

    cout << textBox1.getValue() << endl;
    cout << textBox2.getValue() << endl;


    return 0;
}