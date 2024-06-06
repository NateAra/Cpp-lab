#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/point/Point.h"


using namespace std;


int main() {
    Length first{10};

    cout << first << endl;
    cout << boolalpha << (first == 10);

    return 0;
}