#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Use this chart to set the commission based on the sales
        * Sale | Commission
        * Up to 10,000 | 10 %
        * 10,000 to 50,000 \ 15 %
        * Over 50,000 | 20 %
*/
int main() {

    double lowCommission = 0.10;
    double middleCommission = 0.15;
    double highCommission = 0.20;

    int lowSales = 10'000;
    int highSales = 15'000;

    int sales;
    std::cout << "How much was the sale? ";

    std::cin >> sales;

    if (sales < lowSales) {
        std::cout << sales * lowCommission << std::endl << "10% Commission";
    } else if (sales >= lowSales && sales <= highSales) {
        std::cout << sales * middleCommission << std::endl << "15% Commission";
    } else {
        std::cout << sales * highCommission << std::endl << "20% Commission";
    }

    return 0;
}