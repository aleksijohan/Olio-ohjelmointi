#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main() {
    std::cout << "=== Chef Gordon Ramsay ===" << std::endl;
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    std::cout << "\n=== ItalianChef Anthony Bourdain ===" << std::endl;
    ItalianChef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    std::cout << "ItalianChef name: " << chef2.getName() << std::endl;

    
    return 0;
}