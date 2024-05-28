#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    * Implement the bubble sort algorithm
        * Create a function that takes an array of int and sorts it.
*/


int main() {

    int matrix[2][3] = {
            {1, 2, 3},
            {4, 5, 6},
    };

    for (int row = 0; row < std::size(matrix); row++) {
        for (int nums : matrix[row]) {
            std::cout << nums << std::endl;
        }
    }


    return 0;
}