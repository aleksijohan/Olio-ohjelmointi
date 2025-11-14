#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string merkki;
    std::string malli;
    int vuosiMalli;

public:
    void printData() const;
    void setMerkki(const std::string& merkki);
    void setMalli(const std::string& malli);
    void setVuosiMalli(int vuosi);
};

#endif // CAR_H