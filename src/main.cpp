#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Create a function that receives 2 int and returns the maximum of the two.
*/

using namespace std;

void greet(string name) {
    cout << "Hello " << name;
}

void greet(string title, string name) {
    cout << "Hello " << title << " " << name;

}

int main() {

    greet("Mr. ", "Nate");

    return 0;
}