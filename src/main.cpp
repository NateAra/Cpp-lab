#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    *
*/
int main() {

    bool isCitizen = true;
    bool caResident = true;
    int tuition = 0;

    if (isCitizen) {
        if (!caResident) tuition = 1000;
    } else {
        tuition = 3000;
    }


    return 0;
}