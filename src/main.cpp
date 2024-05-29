#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/

int main() {
    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &y;

    if (ptrX != nullptr) {
        cout << *ptrX << endl;
    }

    if (ptrX == ptrY) {
        cout << "Same" << endl;
    } else {
        cout << "Not the same" << endl;
    }

    if (*ptrX < *ptrY) {
        cout << *ptrY;
    } else {
        cout << *ptrX;
    }

    return 0;
}