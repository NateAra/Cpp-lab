#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    *
*/

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    int* ptr = &x;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;

    cout << x << endl; // 20
    cout << y << endl; // 60


    return 0;
}