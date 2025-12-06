// ClassA1.h
#ifndef CLASSA1_H
#define CLASSA1_H

#include <string>
#include "ClassB.h"

class ClassA1 {
private:
    ClassB objectB;
public:
    ClassA1(ClassB); // Luodaan kopio ClassB-luokan oliosta
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // CLASSA1_H