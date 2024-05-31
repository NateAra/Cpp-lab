#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    string name = "Nate";

    if (name.find('A') == -1) {
        cout << "'A' Doesn't Exist!" << endl;
    }

    cout << name.rfind('a') << endl;

    cout << name.find_first_of("etN") << endl; // Finds the first of any of the characters.

    cout << name.find_last_of("Nate"); // Same as the find first of.

    return 0;
}