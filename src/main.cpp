#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    unique_ptr<int> x(new int);
    auto y = make_unique<int>(20);
    auto numbers = make_unique<int[]>(5);

    *x = 10;
    numbers[0] = 30;

    cout << *x << endl;
    cout << *y << endl;
    cout << numbers[0];

    // With the unique ptr there won't be a need to use delete.

    return 0;
}