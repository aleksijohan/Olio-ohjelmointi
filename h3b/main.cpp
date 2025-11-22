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
    } // ← animal tuhoutuu tässä

    std::cout << "\n-------------------\n" << std::endl;

    {
        std::cout << "Luodaan Dog-olio:" << std::endl;
        Dog dog;
        dog.callOut();                    // Tulostuu: Koira haukkuu!
        std::cout << std::endl;
    } // ← dog tuhoutuu tässä (ensin Dog-destruktori, sitten Animal-destruktori)

    std::cout << "\nOhjelma päättyy." << std::endl;
    return 0;
}