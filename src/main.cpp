#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

/*Exercise
    *
*/

struct Movies {
    string title;
    int releaseYear = 0;
};


int main() {
    vector<Movies> movies;

    Movies Terminator = {
            "Terminator",
            1990
    };

    Movies jonWick {
        "John Wick",
        2020
    };

    movies.push_back(Terminator);
    movies.push_back(jonWick);

    cout << movies[0].title << endl;

    for (const auto& movie : movies) {
        cout << "Title: " << movie.title << endl;
        cout << "Release Year: " << movie.releaseYear << endl;
    }




    return 0;
}