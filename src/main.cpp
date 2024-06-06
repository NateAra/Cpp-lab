#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/point/Point.h"


using namespace std;


int main() {
    Length first{10};
    Length second{20};

    if (first < second)
        cout << "Second is greater!";


    return 0;
}