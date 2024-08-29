#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> businessnames;
    std::string businessname;
    std::string userInput;
    
    std::cout << "Welcome to the Business Sorting Program!" << std::endl;

       {
        std::cout << "\nPlease enter the name of a business: ";
        std::getline(std::cin, businessname);
        businessnames.push_back(businessname);


        std::sort(businessnames.begin(), businessnames.end());

        std::cout << "\nYour businesses are:\n";
        for (const auto& name : businessnames) {
            std::cout << "    " << name << std::endl;
        }

        std::cout << "\nAnother business? ";
        std::getline(std::cin, userInput);

    } while (userInput == "y" || userInput == "Y" || userInput == "yes" || userInput == "Yes");

    std::cout << "\nThank you for using the Business Sorting Program!" << std::endl;
    
    return 0;
}