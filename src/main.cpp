#include <iostream>
#include "cmath"

using namespace std;

/* Exercise
    * Write a program to calculate the area of a circle
        * The program should ask the user to enter the radius of a circle
        * And then print the area of a circle.
 */

int main() {
    cout << "Enter radius: ";

    double radius;
    cin >> radius;

    const double pi = 3.14159265359;
    double area = pi * pow(radius, 2);

    cout << area << endl;
    return 0;
}