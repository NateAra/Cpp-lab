#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/smartPointer/SmartPointer.h"
#include "classes/Array.h"
#include "Exercises/textBox/TextBox.h"

using namespace std;

int main() {
    TextBox txt{};
    txt.disable();

    cout << txt.isEnabled();


    return 0;
}