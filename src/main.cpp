#include <iostream>
#include "vector"
#include "fstream"
#include "iomanip"
#include "../utils/greet.hpp"

using namespace std;

int main() {
    int numbers[3];
    ifstream file("numbers.dat", ios::binary);

    if (file.is_open()) {
        int number;
        while (file.read(reinterpret_cast<char*>(&number), sizeof(number))){
            cout << number << endl;
        }
        file.close();
    }

    return 0;
}