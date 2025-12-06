// ClassA2.h
#ifndef CLASSA2_H
#define CLASSA2_H

#include <string>
#include "ClassB.h"

class ClassA2 {
private:
    ClassB &refB;
public:
    ClassA2(ClassB&); // Annetaan argumenttina B-luokan olion osoite
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // CLASSA2_H