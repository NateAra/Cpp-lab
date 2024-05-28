#include <iostream>
#include "../utils/greet.hpp"

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size ; ++i) {
        std::cout << numbers[i] << std::endl;
    }
}

int main() {

    int first[] = {10, 20, 30};
    printNumbers(first, std::size(first));

    return 0;
}