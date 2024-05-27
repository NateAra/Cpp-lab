#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Create a function that receives 2 int and returns the maximum of the two.
*/

using namespace std;

int maximum(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main() {

    std::cout << maximum(2, 5);

    return 0;
}