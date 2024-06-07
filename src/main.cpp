#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/smartPointer/SmartPointer.h"
#include "classes/Array.h"
#include "Exercises/textBox/TextBox.h"
#include "Exercises/inheritance_shape/Circle.h"

using namespace std;

void showWidget(Widget& widget) {
    widget.draw();
}

int main() {
    TextBox box;
    showWidget(box);

    return 0;
}