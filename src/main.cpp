#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    *
*/


int main() {
    string name = "Nate Tklay Arafayne";

    auto index = name.rfind(' ');

    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);

    cout << '(' << firstName << ')' << endl;
    cout << '(' << lastName << ')' << endl;



    return 0;
}