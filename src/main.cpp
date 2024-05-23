#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

/* Exercise
    *  Find the size limit of a couple of data types
*/

int main() {
    bool isValid = false;
    bool isNotValid = true;

    std::cout << isValid << std::endl;
    std::cout << isNotValid << std::endl;
    std::cout << std::boolalpha << isValid << std::endl;
    std::cout << std::boolalpha << isNotValid << std::endl;
    std::cout << std::noboolalpha << isValid << std::endl;

    return 0;
}