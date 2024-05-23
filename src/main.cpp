#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


int main() {
    std::cout << std::fixed << std::setprecision(2) << 12.34567 << std::endl << 12.54 << std::endl;
    std::cout << std::left;
    std::cout << std::setw(15) << "Spring " << std::endl << std::setw(15) << "Summer" << std::endl;

    return 0;
}