#include <iostream>

using namespace std;

/* Exercise
    * Write a program to convert a temperature from Fahrenheit to Celsius.
    * Out Enter Fahrenheit
    * User inputs Fahrenheit
    * Program Converts to Celsius and outputs it.
*/

int main() {
    cout << "Enter Temperature in F: ";
    double fahrenheit;
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << "The Temperature is: " << celsius << "C" << endl;

    return 0;
}