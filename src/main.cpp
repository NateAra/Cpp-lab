#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

/* Exercise
    * Given the following string, write a function to parse this into a Movie structure.
        * "Terminator 1,1984"
*/

struct Movie {
    string title;
    int year = 0;
};

Movie parseMovie(const string& str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;

    return movie;
}

int main() {
    string str = "Terminator 1,1984";
    Movie movie = parseMovie(str);

    cout << movie.title << endl;
    cout << movie.year;

    return 0;
}