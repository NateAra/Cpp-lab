#include <iostream>
#include "../utils/greet.hpp"

using namespace std;


void increasePrice(double* price) {
    *price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(&price);

    cout << price;

    return 0;
}