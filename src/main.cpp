#include <iostream>
#include "classes/Rectangle.h"
#include "classes/Length.h"
#include "Exercises/point/Point.h"

using namespace std;

int main() {
    Length first{10};
    Length second{20};
    Length third = first + second;

    cout << third;

    return 0;
}