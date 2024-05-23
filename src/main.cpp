#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


int main() {
    std::cout << std::left;
    std::cout << std::setw(15) << "Spring " << std::endl << std::setw(15) << "Summer" << std::endl;

    return 0;
}