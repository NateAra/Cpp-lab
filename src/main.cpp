#include <iostream>
#include "../utils/greet.hpp"


int main() {

    int numbers[] = {10, 20, 30};

    for (int i = 0; i < std::size(numbers) ; ++i) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}