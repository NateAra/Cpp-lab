#include <iostream>
#include "../utils/greet.hpp"


int main() {

    int value[3] = {10, 20, 30};

    // Structured binding
    int x = value[0];
    int y = value[1];
    int z = value[2];

    auto [a, b, c] = value;

    std::cout << x << ", " << y << ", " << z << std::endl;
    std::cout << a << ", " << b << ", " << c << std::endl;


    return 0;
}