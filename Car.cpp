#include "Car.h"
#include <iostream>

Car::Car(const std::string& merkki, const std::string& malli, int vuosi)
    : merkki(merkki), malli(malli), vuosiMalli(vuosi) {
}

void Car::printData() const {
    std::cout << "Merkki: " << merkki
              << ", Malli: " << malli
              << ", Vuosi: " << vuosiMalli << std::endl;
}