#include <iostream>
#include "Car.h"

int main() {
    Car auto1("Toyota", "Corolla");

    auto1.setEngine();
    auto1.setWheels();

    auto1.printDetails();

    return 0;
}