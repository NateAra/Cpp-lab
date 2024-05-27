#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Write a program asking the user to enter a row and make this:
        - *
        - **
        - ***
        - ****
*/

void greet(std::string name) {
    std::cout << "Hello " << name << "!";
}

int main() {

    greet("Nate");

    return 0;
}