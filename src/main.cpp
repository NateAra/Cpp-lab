#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/

int main() {

    while (true) {
        std::cout << "Number: ";
        int number;
        std::cin >> number;
        if (number >= 1 && number <= 5) {
            break;
        }
        std::cout << "Error! Enter a number between 1 and 5!" << std::endl;
    }

    return 0;
}