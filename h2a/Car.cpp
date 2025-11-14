#include "Car.h"
#include <iostream>

void Car::printData() const {
    std::cout << "Merkki: " << merkki << ", Malli: " << malli
              << ", Vuosi: " << vuosiMalli << std::endl;
}

void Car::setMerkki(const std::string& merkki) {
    this->merkki = merkki;
}

void Car::setMalli(const std::string& malli) {
    this->malli = malli;
}

void Car::setVuosiMalli(int vuosi) {
    this->vuosiMalli = vuosi;
}