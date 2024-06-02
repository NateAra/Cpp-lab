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
};

bool operator == (const Movie& fist, const Movie& second) {
    return (
            fist.title == second.title &&
            fist.releaseDate.year == second.releaseDate.year &&
            fist.releaseDate.month == second.releaseDate.month &&
            fist.releaseDate.day == second.releaseDate.day
    );
}

ostream& operator << (ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream;
}


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

    bool isEqual = movie1 == movie2;
    cout << boolalpha << isEqual;

    cout << movie1;

    return 0;
}