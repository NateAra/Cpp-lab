#include <iostream>
#include "ctime"
#include "cstdlib"

/* Exercise
    * Write a program for rolling dice.
        * Every time the dice rolls we will get 2 random number 1 - 6.
        * To limit the random use this formula: [rand() % (maxValue - minValue + 1)] + minValue
 */


int main() {
    const int minValue = 1;
    const int maxValue = 7;

    std::srand(time(0));
    int dice1 = std::rand() % (maxValue - minValue) + minValue;
    int dice2 = std::rand() % (maxValue - minValue) + minValue;

    std::cout << "Dice 1: " << dice1 << std::endl;
    std::cout << "Dice 2: " << dice2 << std::endl;

    return 0;
}