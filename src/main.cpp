#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Ask the user for two numbers.
    * Store the larger value in a separate variable and print it.
*/
int main() {

    double num1;
    double num2;

    std::cout << "Please Give 2 Numbers: ";

    std::cin >> num1 >> num2;

    double result = (num1 > num2) ? num1 : num2;

    std::cout << "The larger Nr is: " << result;

    return 0;
}