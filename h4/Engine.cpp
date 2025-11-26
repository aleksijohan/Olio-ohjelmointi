#include "Engine.h"
#include <iostream>

Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

int Engine::getHorsepower() const {
    return horsepower;
}

double Engine::getDisplacement() const {
    return displacement;
}

void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

void Engine::setDisplacement(double disp) {
    displacement = disp;
}