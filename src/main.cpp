#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    * Implement the swap function for swapping two variables using pointers.
*/


void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int x = 10;
    int y = 20;

    swap(&x, &y);

    cout << x << endl << y;

    return 0;
}