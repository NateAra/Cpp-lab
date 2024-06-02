#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

enum class Action {
    List = 1,
    Add,
    Update
};

enum class Operation {
    List = 1,
    Add,
    Update
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
        case static_cast<int>(Action::List):
            cout << "List of Invoices";
            break;
        case static_cast<int>(Action::Add):
            cout << "Added Invoices";
            break;
        case static_cast<int>(Action::Update):
            cout << "Updated Invoices";
            break;
        default:
            cout << "Something went wrong, Please Try Again!";
    }




    return 0;
}