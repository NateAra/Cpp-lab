#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/

using namespace std;

void greet(const string& name) {
    cout << "Hello " << name << "!" << endl;
}



int main() {

    string name = "Nate";
    greet(name);

    return 0;
}