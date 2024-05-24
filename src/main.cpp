#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

int main() {

    char age = 10;
    bool isEligible = age >= 18 || age <= 65;

    std::cout << std::boolalpha << !isEligible;
    return 0;
}