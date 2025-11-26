#include "Car.h"
#include <iostream>

Car::Car(std::string b, std::string m) : brand(b), model(m) {
    // Alustetaan moottori ja renkaat tyhjiksi
}

Engine Car::getEngine() const {
    return engine;
}

Wheel Car::getWheel(int index) const {
    if (index >= 0 && index < 4)
        return wheels[index];
    return Wheel(); // palautetaan tyhjä rengas virhetilanteessa
}

std::string Car::getModel() const {
    return model;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (int i = 0; i < 4; i++) {
        wheels[i].setSize(17);
        wheels[i].setType("kesärengas");
    }
}

void Car::printDetails() const {
    std::cout << "Auton tiedot:\n";
    std::cout << "Merkki: " << brand << "\n";
    std::cout << "Malli: " << model << "\n";
    std::cout << "Moottori:\n";
    std::cout << "  Hevosvoimat: " << engine.getHorsepower() << " hv\n";
    std::cout << "  Tilavuus: " << engine.getDisplacement() << " l\n";
    std::cout << "Renkaat:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "  Rengas " << (i+1) << ": " << wheels[i].getSize()
                  << " tuumaa, " << wheels[i].getType() << "\n";
    }
}