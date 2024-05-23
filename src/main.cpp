#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


int main() {
    std::cout << std::numeric_limits<int>::min() << std::endl << std::numeric_limits<int>::max() << std::endl;

    int number = std::numeric_limits<int>::min();
    number--;
    std::cout << number;

    return 0;
}