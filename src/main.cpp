#include <iostream>
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    * Create a temp array (Twice the size)
    * Copy all the elements
    * Have "numbers" pointer point to the new array
*/


int main() {
    int initialSize = 5;
    int* numbers = new int[initialSize];
    int entries = 0;

    while (true) {
        if (entries == initialSize) {
            // Update the initial size.
            initialSize *= 2;

            // Create a temp array (Twice the size)
            int* temp = new int[initialSize];

            copy(numbers, numbers + initialSize, temp);
            numbers = temp;
        }
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail()) break;
        entries++;
    }

    for (int i = 0; i < entries; ++i) {
        cout << numbers[i] << endl;
    }

    delete[] numbers;

    return 0;
}