#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

/*Exercise
    *
*/

struct Movies {
    string title;
    int releaseYear = 0;
    bool isPopular;
};


int main() {
    Movies movie {
        "Terminator",
        1990,
        true
    };

    // Structured binding
    auto [title, releaseYear, isPopular] {movie};

    cout << title << endl;
    cout << isPopular;


    return 0;
}