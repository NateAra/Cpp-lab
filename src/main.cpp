#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/

//using namespace std;

void greet(std::string name) {
    std::cout << "Hello, " << name << std::endl;
}

std::string fullName(std::string firstName, std::string lastName) {
    return firstName + " " + lastName + "!";
}

int main() {

    greet(fullName("Nate", "Arafayne"));

    std::cout << "Done!";

    return 0;
}