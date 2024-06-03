#include <iostream>
#include "vector"
#include "fstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

struct Movie {
    int id;
    string title;
    int year;
};

int main() {
    ifstream file;
    file.open("data.csv");

    if (file.is_open()) {
        string str;

        while (!file.eof()) {
            Movie movie;

            getline(file, str, ',');
            movie.id = stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }

        file.close();
    }

    return 0;
}