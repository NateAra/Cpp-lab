#include <iostream>
#include "memory"
#include "../utils/greet.hpp"

using namespace std;

struct Movie {
    string title;
    int releaseYear;
};


int main() {
    Movie movie;
    movie.title = "Breaking Bad";
    movie.releaseYear = 2005;

    cout << movie.title << endl;
    cout << movie.releaseYear << endl;


    return 0;
}