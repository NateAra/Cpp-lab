#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Write a program asking the user to enter a row and make this:
        - *
        - **
        - ***
        - ****
*/

int main() {
    int rows = 0;
    std::cout << "Enter a rows: ";
    std::cin >> rows;

    for (int x = 1; x <= rows ; x++) {
        for (int y = 0; y < x; y++) {
            std::cout << "*" ;
        }
        std::cout << std::endl;
    }

    return 0;
}