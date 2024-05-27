#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/
int main() {
    int numbers[] = {1, 2, 3, 4};

    for (int i = 0; i < sizeof(numbers) / sizeof(int ); i++) {
        std::cout << numbers[i] << std::endl;
    }

    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    std::string name = "Natnael";

    for (char ch : name) {
        std::cout << ch << std::endl;
    }


    return 0;
}