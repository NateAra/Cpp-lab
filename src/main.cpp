#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/*Exercise
    * Define a structure for representing customers with 3 attributes.
        * ID (Number)
        * Name
        * Email
    * Ask the user for these values, Store them in a Customer Object and print the result.
*/

struct Customers {
    int id;
    string name;
    string email;
};


int main() {
    Customers customer;

    cout << "Enter customer id: ";
    cin >> customer.id;
    cin.ignore();

    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer Email: ";
    cin >> customer.email;

    cout << "ID: " << customer.id << endl;
    cout << "Name: " << customer.name << endl;
    cout << "Email: " << customer.email << endl;


    return 0;
}