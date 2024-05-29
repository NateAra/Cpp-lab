#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

int main() {
    const int x = 10;
    const int* const ptr = &x;

    const int y = 20;
    const int* ptr1 = &y;

    int z = 30;
    int* ptr2 = &z;


    return 0;
}