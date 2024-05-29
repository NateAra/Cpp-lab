#include <iostream>
#include "../utils/greet.hpp"

/* Exercise
    *
*/

using namespace std;

int main() {
    const int x = 10;
    const int* const ptr = &x;



    cout << *ptr;


    return 0;
}