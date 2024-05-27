#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Given a list of temperatures, write code to calculate the average temperature.
*/

int main() {

    int number = 0;

    while (number < 1 || number > 5) {
        std::cout << "Number: ";
        std::cin >> number;

        if (number < 1 || number > 5) {
            std::cout << "Enter a number between 1 and 5!" << std::endl;
        }
    }

    return 0;
}