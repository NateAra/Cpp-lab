#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

struct ReleaseDate {
    int year = 0;
    int month = 0;
    int day = 0;
};

struct Movie {
    string title;
    ReleaseDate releaseDate;

    bool equals(const Movie& movie) {
        return (
                title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day
        );

    }
};


int main() {
    Movie movie1 {
        "Jon Wick",
        {
            2019,
            10,
            10
        }
    };

    Movie movie2 {
        "Tarzan",
        {
            2000,
            10,
            1
        }
    };

    if (movie1.equals(movie2)) {
        cout << "Equal";
    } else {
        cout << "Not Equal";
    }



    return 0;
}