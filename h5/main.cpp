// main.cpp
#include <iostream>
#include <string>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

int main() {
    // Osa 1: Muuttuja, pointteri ja referenssi
    int a = 5;
    std::cout << "a:n arvo on: " << a << " ja osoite on: " << &a << std::endl;

    int* pointerA = &a;
    std::cout << "Pointterin osoittama osoite on: " << pointerA << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << std::endl;

    int& refA = a;
    std::cout << "refA osoittaa osoitteeseen on: " << &refA << std::endl;
    std::cout << "refA:n osoittaman muistipaikan arvo on: " << refA << std::endl;

    int b = 6;
    // refA = b; // Ei voi muuttaa referenssin osoitetta, mutta tämä asettaisi a:n arvoksi 6, ei vaihda viittausta
    // Kokeilu: Ei voi asettaa refA viittaamaan b:hen suoraan, referenssi on sidottu alustuksessa

    pointerA = &b; // Pointteri voidaan asettaa uudelleen
    std::cout << "Pointterin uusi osoite on: " << pointerA << std::endl;
    std::cout << "Pointterin uusi arvo on: " << *pointerA << std::endl;

    // Erot:
    // pointerA on pointterimuuttuja itse (osoite), *pointerA on osoittaman arvo
    // refA on alias arvolle (kuten a), &refA on osoite (sama kuin &a)
    // Pointteri voidaan muuttaa osoittamaan muualle, referenssi ei

    std::cout << std::endl;

    // Osa 2: Olio argumenttina
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA1: " << objA1.getBinfo() << std::endl;

    std::cout << std::endl;

    // Osa 3: Referenssi argumenttina
    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion objA2 asettama info");
    std::cout << "objB: " << objB.getInfo() << std::endl;
    std::cout << "objA2: " << objA2.getBinfo() << std::endl;

    return 0;
}