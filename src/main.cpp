#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/
int main() {

    int sales = 11'000;
    double commission = (sales > 10'000) ? .1 : .05;

    std::cout << commission;

    return 0;
}