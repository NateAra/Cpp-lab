#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    auto x = make_shared<int>();
    *x = 10;
    shared_ptr<int> y(x);

    cout << *y;

    return 0;
}