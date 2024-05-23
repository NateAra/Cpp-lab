#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

/* Exercise
    *  Write a program that asks the user a series of questions like:
        * Street, City, State and Zipcode
        * and then prints the user's address using this format:
            *  Street
            *  City, State, Zipcode
*/

int main() {
    std::string street;
    std::string city;
    std::string state;
    std::string zipcode;

    std::cout << "Enter your Street: ";
    std::getline(std::cin, street);

    std::cout << "Enter your City: ";
    std::getline(std::cin, city);

    std::cout << "Enter your State: ";
    std::cin >> state;

    std::cout << "Enter your ZipCode: ";
    std::cin >> zipcode;

    std::cout << street << std::endl
              << city << "," << zipcode << ","  << state;

    return 0;
}