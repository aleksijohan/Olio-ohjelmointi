#include "Wheel.h"

Wheel::Wheel(int s, std::string t) : size(s), type(t) {}

int Wheel::getSize() const {
    return size;
}

std::string Wheel::getType() const {
    return type;
}

void Wheel::setSize(int s) {
    size = s;
}

void Wheel::setType(std::string t) {
    type = t;
}