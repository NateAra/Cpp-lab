#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    *
*/

using namespace std;

int main() {
    const int x = 10;
    const int* ptr = &x;

    int y = 20;
    ptr = &y;

    cout << *ptr;


    return 0;
}