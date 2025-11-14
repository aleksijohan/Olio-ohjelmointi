#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string malli;
    std::string merkki;
    int vuosiMalli;

public:
    
    Car(const std::string& merkki, const std::string& malli, int vuosi);
   
    void printData() const;
};

#endif // CAR_H