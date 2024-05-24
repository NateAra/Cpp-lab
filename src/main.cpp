#include <iostream>
#include "ctime"
#include "cstdlib"
#include "iomanip"


/* Exercise
    * Code this requirement:
        * A Job application should be a US citizen and either hava a Bachelor degree or at least 2 years of experience.
*/
int main() {

    std::string isUSCitizenInput;
    std::string degreeInput;
    bool isUSCitizen;
    bool degree;
    int experience;

    std::cout << "Are you a US Citizen? (yes/no): ";
    std::cin >> isUSCitizenInput;
    isUSCitizen = isUSCitizenInput == "yes" || isUSCitizenInput == "Yes";

    if (!isUSCitizen) {
        std::cout << "Candidate is not eligible" << std::endl;
        return 0;
    }

    std::cout << "Do you have Bachelor degree? (yes/no): ";
    std::cin >> degreeInput;
    degree = degreeInput == "yes" || degreeInput == "Yes";

    if (!degree) {
        std::cout << "Year of Experience? ";
        std::cin >> experience;
    } else {
        experience = 0;
    }


    std::string isEligible = isUSCitizen && (degree || experience >= 2) ? "Candidate is eligible" : "Candidate is not eligible";

    std::cout << isEligible;
    return 0;
}