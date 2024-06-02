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

    if (movie1.releaseDate.month == movie2.releaseDate.month) {
        cout << "Equal";
    }



    return 0;
}