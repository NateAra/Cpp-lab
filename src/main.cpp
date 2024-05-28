#include <iostream>
#include "../utils/greet.hpp"


int main() {

    int first[] = {10, 20, 30};
    int second[std::size(first)];

    for (int i = 0; i < std::size(first) ; i++) {
        second[i] = first[i];
    }

    for (int number : second) {
        std::cout << number << std::endl;
    }

    return 0;
}