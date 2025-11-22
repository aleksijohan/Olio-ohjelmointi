#pragma once
#include <iostream>

class Animal {
public:
    Animal();
    virtual ~Animal();                // Tärkeä! Mahdollistaa oikean destruktorin kutsun periytyvissä luokissa

    virtual void callOut() const;     // Virtuaalinen metodi → voidaan ylikirjoittaa
};