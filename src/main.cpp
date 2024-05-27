#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Given a list of temperatures, write code to calculate the average temperature.
*/

int main() {

    int temps[] = {60, 80, 90};
    double average = 0;
    int count = 0;

    for (int temp : temps) {
        average += temp;
        count++;
    }    std::cout << "The average temperature in the next " << count << " days is: " << average / count;

    return 0;
}