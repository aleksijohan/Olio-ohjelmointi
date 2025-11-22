#pragma once
#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& n);
    ~ItalianChef();

    std::string getName() const;
    void makePasta();
};