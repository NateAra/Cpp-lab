#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/point/Point.h"


using namespace std;


int main() {
    Length length{};

    cout << "Enter Length: ";
    cin >> length;

    cout << "Length: "<< length;

    return 0;
}