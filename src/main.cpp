#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Ask the user for a positive number. Print the factorial of that number.
*/
int main() {
    int factorial = 1;
    int number;

    std::cout << "Enter the factorial number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error!";
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        std::cout << factorial << std::endl;
    }



    return 0;
}