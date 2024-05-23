#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

int main() {
    int x = 10;
    int y = 3;
    double z = x / static_cast<double >(y);

    std::cout << z;

    return 0;
}