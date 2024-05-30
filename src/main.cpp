#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/

int main() {
    // Stack
    int numbers1[10];

    // Heap (Free Store)
    int* numbers = new int[10];
    delete[] numbers;
    numbers = nullptr;

    int* number = new int;
    delete number;
    number = nullptr;
    
    return 0;
}