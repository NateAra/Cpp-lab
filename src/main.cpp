#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Ask the user for two numbers.
    * Store the larger value in a separate variable and print it.
*/
int main() {

    int input;
    
    std::cout << "Enter a number between 1 - 3: ";
    std::cin >> input;

    switch (input) {
        case 1:
            std::cout << "You selected 1";
            break;
        case 2:
            std::cout << "You selected 2";
            break;
        case 3:
            std::cout << "You selected 3";
            break;
        default:
            std::cout << "Goodbye";
    }

    return 0;
}