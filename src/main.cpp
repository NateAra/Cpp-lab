#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

enum Action {
    list = 1,
    add,
    update
};

int main() {
    int input;

    cout
    << "1: List Invoices" << endl
    << "2: Add Invoices" << endl
    << "3: Update Invoices" << endl
    << "Select: ";

    cin >> input;

    switch (input) {
        case Action::list:
            cout << "List of Invoices";
            break;
        case Action::add:
            cout << "Added Invoices";
            break;
        case Action::update:
            cout << "Updated Invoices";
            break;
        default:
            cout << "Something went wrong, Please Try Again!";
    }




    return 0;
}