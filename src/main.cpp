#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/smartPointer/SmartPointer.h"
#include "classes/Array.h"
#include "Exercises/textBox/TextBox.h"
#include "Exercises/inheritance_shape/Circle.h"

using namespace std;

int main() {
    Rectangle rectangle{};
    Circle circle{};

    rectangle.setBackground("Blue");
    circle.setBackground("Black");

    cout << rectangle.getBackground() << endl;
    cout << circle.getBackground() << endl;


    return 0;
}