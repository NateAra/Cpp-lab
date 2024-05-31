#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/*Exercise
    *
*/

struct Customers {
    string title;
    int releaseYear = 0;
    bool isPopular;
};


int main() {
    Customers customer {
        "Terminator",
        2002,
        true
    };

    cout << customer.isPopular;


    return 0;
}