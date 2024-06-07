#include <iostream>
#include "vector"
#include "Exercises/textBox/TextBox.h"
#include "Exercises/checkBox/CheckBox.h"
#include "classes/Inheritance_Polymorphism/Widget.h"

using namespace std;

int main() {
    vector<unique_ptr<Widget>> widgets;
    widgets.push_back(make_unique<TextBox>());
    widgets.push_back(make_unique<CheckBox>());

    for (const auto& widget : widgets) {
        widget->draw();
    }




    return 0;
}