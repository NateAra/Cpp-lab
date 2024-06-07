#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/smartPointer/SmartPointer.h"
#include "classes/Array.h"
#include "Exercises/textBox/TextBox.h"
#include "Exercises/checkBox/CheckBox.h"
#include "Exercises/inheritance_shape/Circle.h"

using namespace std;

void showWidget(Widget& widget) {
    widget.draw();
}

int main() {
    TextBox box;
    CheckBox cBox;
    showWidget(box);
    showWidget(cBox);



    return 0;
}