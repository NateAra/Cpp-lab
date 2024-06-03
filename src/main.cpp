#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

int getNumber(const string& prompt) {
    int userNumber;
    while (true) {
        cout << prompt;
        cin >> userNumber;
        if (cin.fail()) {
            cout << "Invalid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return userNumber;
}

int main() {
    int first = getNumber("Enter first number: ");
    int second = getNumber("Enter second number: ");

    cout << "You have entered: " << first << " and " << second;

    return 0;
}