#ifndef WHEEL_H
#define WHEEL_H
#include <string>

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel(int s = 0, std::string t = "");

    int getSize() const;
    std::string getType() const;

    void setSize(int s);
    void setType(std::string t);
};

#endif