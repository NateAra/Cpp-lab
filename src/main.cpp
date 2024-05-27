#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Declare a secret number. Continuously ask the user to guess the secret number.
*/

int main() {

    int secret = 2;
    int number = 0;

    while (number != secret) {
        std::cout << "Please Guess the number: ";
        std::cin >> number;
    }

    std::cout << "Congratulation!!";


    return 0;
}