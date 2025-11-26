#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(int hp = 0, double disp = 0.0);

    // Getterit
    int getHorsepower() const;
    double getDisplacement() const;

    // Setterit
    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif