#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

/*Exercise
    * Create a structure for representing an address.
    * Each address should have 3 members.
        * Street
        * City
        * ZipCode
    * And then Nest the Address structure within Customer Structure.
*/

struct Address {
    string street;
    string city;
    int zipCode = 0;
};

struct Customers {
    int id = 0;
    string name;
    string email;
    Address address;
};


int main() {
    vector<Customers> customers;

    Customers firstCus {
        1,
        "Nate Arafayne",
        "Nate@gmail.com",
        {
            "Street B",
            "Trondheim",
            7132
        }
    };

    customers.push_back(firstCus);

    for (const auto& customer : customers) {
        cout << "ID: " << customer.id << endl;
        cout << "Name: " << customer.name << endl;
        cout << "City: " << customer.address.city << endl;
    }

    return 0;
}