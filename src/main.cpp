#include <iostream>

using namespace std;

int main() {
    int totalSales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;

    double stateTaxTotal = stateTax * totalSales;
    double countyTaxTotal = countyTax * totalSales;
    double taxTotal = stateTaxTotal + countyTaxTotal;
    double totalProfit = totalSales - taxTotal;

    cout << "Total Sales: $" << totalSales << endl;
    cout << "State Tax: $" << stateTaxTotal << endl;
    cout << "County Tax: $" << countyTaxTotal << endl;
    cout << "Total Tax: $" << taxTotal << endl;
    cout << "Total Profit: $" << totalProfit << endl;
    return 0;
}