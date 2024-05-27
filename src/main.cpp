#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/

using namespace std;

void increasePrice(double& price) {
    price *= 1.2;
}

void inPrice(double p) {
    p *= 1.2;
}

int main() {

    double price = 100;
    increasePrice(price);
    cout << price << endl; // ---> 120

    double p = 100;
    inPrice(p);
    cout << p; // ---> 100

    return 0;
}