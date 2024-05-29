#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/

int main() {
    int numbers[] = {10, 20, 30};
    int* ptr = numbers;

    ptr++;
    cout << *ptr << endl;

    ptr--;
    cout << *ptr << endl;

    cout << *(ptr + 1);


    return 0;
}