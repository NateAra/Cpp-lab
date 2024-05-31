#include <iostream>
#include "vector"
#include "../utils/greet.hpp"

using namespace std;

struct Date {
    int year = 1900;
    int month = 1;
    int day = 1;
};

struct Movies {
    string title;
    Date releaseDate;
    int rating;
};


int main() {
    vector<Movies> movies;

    Movies Terminator = {
            "Terminator",
            {
                1990
            },
            6
    };

    Movies jonWick {
        "John Wick",
        {
            2020,
            10,
            10
        },
        6
    };

    movies.push_back(Terminator);
    movies.push_back(jonWick);

    for (const auto& movie : movies) {
        cout << "Title: " << movie.title << endl;
        cout << "Release-Year: " << movie.releaseDate.year << endl;
        cout << "Rating: " << movie.rating << endl;
        cout << "------------------" << endl;
    }




    return 0;
}