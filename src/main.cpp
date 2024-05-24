#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

int main() {
    int x = 10;
    int y = 5;
    bool result = x != y;

    char first = 'A';
    char second = 'a';
    bool result2 = first == second;

    std::cout << std::boolalpha;
    std::cout << result << std::endl << result2;

    return 0;
}