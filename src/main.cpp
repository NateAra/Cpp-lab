#include <iostream>
#include "../utils/greet.hpp"


int main() {

    int first[] = {10, 20, 30};
    int second[] = {10, 202, 30};

    bool areEqual = true;

    for (int i = 0; i < std::size(first) ; ++i) {
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }
    }

    std::cout << std::boolalpha << areEqual;

    return 0;
}