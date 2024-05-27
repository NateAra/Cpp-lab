#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/

using namespace std;

const double taxRate = .2;

double calculateTax(int sales) {
    return sales * taxRate;
}

int main() {

    int sales = 10'000;
    double tax = calculateTax(sales);
    cout << tax;

    return 0;
}