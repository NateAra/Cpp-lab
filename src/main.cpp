#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"
#include "classes/Rectangle.h"
#include "Exercises/TextBox/TextBox.h"

using namespace std;

void showRectangle0(Rectangle rectangle) {

}

void showRectangle(Rectangle& rectangle) {

}


int main() {
    Rectangle rectangle(10, 20, "Red");
    Rectangle copyRectangle = rectangle;

    showRectangle0(rectangle); // ---> Cope
    showRectangle(rectangle); // ---> Reference

    return 0;
}