#ifndef CAR_H
#define CAR_H
#include "Engine.h"
#include "Wheel.h"
#include <string>

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    std::string model;
    std::string brand;

public:
    Car(std::string b, std::string m);

    // Getterit
    Engine getEngine() const;
    Wheel getWheel(int index) const;
    std::string getModel() const;
    std::string getBrand() const;

    // Setterit
    void setEngine();
    void setWheels();

    void printDetails() const;
};

#endif