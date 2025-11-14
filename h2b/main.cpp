#include <iostream>
#include <vector>
#include "Car.h"

int main() {
    
    std::vector<Car> carList;

    
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("Volkswagen", "Golf", 2018);
    carList.emplace_back("Tesla", "Model 3", 2023);

    
    std::cout << "Toinen auto listassa:\n";
    carList[1].printData();
    std::cout << std::endl;

    
    std::cout << "Kaikki autot:\n";
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}