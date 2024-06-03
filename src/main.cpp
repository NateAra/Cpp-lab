#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

int main() {
    string str = "10 20";

    stringstream stream;
    stream.str(str);

    int first;
    stream >> first;

    int second;
    stream >> second;

    cout << first << " + " << second << " = " << first + second;

    return 0;
}