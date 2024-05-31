#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    string name = "Nate";
    name.append(" Arafayne");
    name.insert(4, " Tklay");

    name.erase(1, 2);
    name.replace(1, 1, "at");

    name.clear();

    cout << name;


    return 0;
}