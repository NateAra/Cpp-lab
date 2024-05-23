#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

/* Exercise
    *  Write a program that asks the user for 3 names
    *  Store these names in an array
    *  Than print the first name.
*/

int main() {
    std::string names[3];

    std::cout << "Enter 3 Names Please." << std::endl;

    std::cout << "1st Names: ";
    std::getline(std::cin, names[0]);

    std::cout << "2nd Names: ";
    std::getline(std::cin, names[1]);

    std::cout << "3rd Names: ";
    std::getline(std::cin, names[2]);

    std::cout << "The 1st name is: " << names[0];

    return 0;
}