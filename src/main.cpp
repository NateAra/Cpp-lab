#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    // String literal
    char name[10] = "Nate";

    // Character literal
    name[0] = 'n';

    cout << name << endl;
    cout << name[0] << endl;
    // String Size
    cout << strlen(name) << endl;

    char lastName[] = "Arafayne";

    // Concatenate
    strcat(name, " ");
    strcat(name, lastName);

    cout << name << endl;
    cout << strlen(name) << endl; // Boundary Error (name size = 10)

    // Copy
    strcpy(name, lastName);

    cout << name << endl;

    // Comparing string
    if (strcmp(name, lastName) == 0) {
        cout << "Equal!";
    } else {
        cout << "Not Equal!";
    }


    return 0;
}