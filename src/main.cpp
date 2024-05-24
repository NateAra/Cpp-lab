#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"

int main() {

    int age = 18;
    int salary = 50'000;
    const int baseSalary = 30'000;

    bool isEligible = (age >= 18 && age <= 65) && (salary > baseSalary);

    std::cout << std::boolalpha << isEligible;
    return 0;
}