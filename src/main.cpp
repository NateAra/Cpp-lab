#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

struct ReleaseDate {
    int year = 0;
    int month = 0;
};

struct Movie {
    string title;
    ReleaseDate releaseDate;
};

ostream& operator << (ostream& stream, const Movie& movie) {
    stream << "Title: " << movie.title << ", " << "Release Year: " << movie.releaseDate.year;
    return stream;
}

Movie getMovie() {
    Movie movie = {"Terminator", 1984};
    return movie;
}

void showMovieTitle(Movie* movie) {
    cout << movie->title;
}


int main() {

    auto movie = getMovie();
    showMovieTitle(&movie);


    return 0;
}