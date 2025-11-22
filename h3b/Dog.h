#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    ~Dog() override;

    void callOut() const override;    // Ylikirjoitetaan kantaluokan metodi
};