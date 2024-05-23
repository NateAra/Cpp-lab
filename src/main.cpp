#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

/* Exercise
    * Write a program for printing this table:
        * |Course      |Student      |
        * |C++         |          100|
        * |JavaScript  |           50|
*/


int main() {
    const int cppStudents = 100;
    const int jsStudents = 50;

    std::cout << std::left << "|" << std::setw(15) << "Course" << "|" << std::setw(15) << "Summer" << "|" << std::endl;
    std::cout << std::left << "|" << std::setw(15) << "C++" << "|" << std::right << std::setw(15) << "100" << "|" << std::endl;
    std::cout << std::left << "|" << std::setw(15) << "JavaScript" << "|" << std::right << std::setw(15) << "50" << "|" << std::endl;

    return 0;
}