#include <iostream>
#include "sstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

string to_string(double number, int precision) {
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}

int main() {
    double num = 42.34;
    string str = to_string(num, 2);

    cout << str;

    return 0;
}