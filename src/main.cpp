#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    * Given the following format for customer number:
        * 2 alphabetic characters
        * 4 digits
    * Write a function to validate a customer number.
*/

bool isValid(string customerNumber) {
    if (customerNumber.length() != 6)
        return false;

    if (!isalpha(customerNumber[0]) && !isalpha(customerNumber[1]))
        return false;

    for (int i = 2; i < customerNumber.length() ; ++i) {
        if (isdigit(customerNumber[1]))
            return false;
    }
    return true;
}


int main() {
    string cNumber = "na2024";

    cout << boolalpha << isValid(cNumber);

    return 0;
}