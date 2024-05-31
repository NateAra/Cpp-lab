#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    string number = "9.99x";
    double p = 10.40;

    double price = stod(number);
    string str = to_string(p);

    cout << price << ", " << str;


    return 0;
}