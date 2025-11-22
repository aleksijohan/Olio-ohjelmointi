#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main() {
    std::cout << "=== Harjoitus 3b ===\n" << std::endl;

    {
        std::cout << "Luodaan Animal-olio:" << std::endl;
        Animal animal;
        animal.callOut();
        std::cout << std::endl;
    } 

    std::cout << "\n-------------------\n" << std::endl;

    {
        std::cout << "Luodaan Dog-olio:" << std::endl;
        Dog dog;
        dog.callOut();                    
        std::cout << std::endl;
    } 

    std::cout << "\nOhjelma päättyy." << std::endl;
    return 0;
}