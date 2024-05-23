#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

/* Exercise
    *  Find the size limit of a couple of data types
*/

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hei, " << name << std::endl;

    char letter = 'N';

    std::cout << letter << std::endl;
    std::cout << +letter;

    return 0;
}