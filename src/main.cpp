#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Create a basic calculator.
    * Ask the user for two numbers and an Operator.
    * Then, print the result of applying the operator to those numbers.
*/
int main() {

    char op;
    double num1;
    double num2;
    
    std::cout << "Calculator: ";
    std::cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
    }

    return 0;
}