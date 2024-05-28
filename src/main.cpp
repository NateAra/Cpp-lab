#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    * Implement the bubble sort algorithm
        * Create a function that takes an array of int and sorts it.
*/

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {
    for (int pass = 0; pass < size; ++pass) {
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < numbers[i - 1]) {
                swap(numbers, i, i-1);
            }
        }
    }
}


int main() {

    int numbers[] = {3, 2, 1, 5, 4};
    bubbleSort(numbers, std::size(numbers));

    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}