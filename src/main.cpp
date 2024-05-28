#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    * Implement the linear search algorithm
        * Create a function for finding a value in an int array.
        * If the target value exists, return its index. Otherwise, return -1.
*/

int findValue(int numbers[], int size, int val) {
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == val) {
            return i;
        }
    }
    return -1;
}


int main() {

    int numbers[] = {1, 3, 5, 11, 8, 12};
    int value = 2;

    std::cout << findValue(numbers, std::size(numbers), value);


    return 0;
}