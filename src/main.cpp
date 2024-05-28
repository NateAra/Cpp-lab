#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    *
*/

const int rows = 2;
const int columns = 3;

void printMatrix(int matrix[rows][columns]) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < columns; col++) {
            std::cout << matrix[row][col] << std::endl;
        }
    }
}


int main() {

    int matrix[rows][columns] = {
            {1, 2, 3},
            {4, 5, 6},
    };

    printMatrix(matrix);

    return 0;
}