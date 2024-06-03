#include <iostream>
#include "vector"
#include "fstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

int main() {
    ofstream file;
    file.open("data.csv");
    if (file.is_open()) {
        // CSV: Comma Separated Value
        file
        << "ID,Title,Year\n"
        << "1,Terminator,1989\n"
        << "2,John Wick,2020";
        file.close();
    }

    return 0;
}