#pragma once
#include <iostream>
#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(const std::string& n);
    ~Chef();

    void makeSalad();
    void makeSoup();
};