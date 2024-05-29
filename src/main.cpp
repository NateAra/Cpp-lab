#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/

void printNumbers(int numbers[]) {
    numbers[0] = 5;
}


int main() {
    int numbers[] = {10, 20, 30};
    printNumbers(numbers);


    cout << numbers[0];

    return 0;
}