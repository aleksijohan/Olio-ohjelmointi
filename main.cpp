#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
    
    Car myCar;
    myCar.setMerkki("Toyota");
    myCar.setMalli("Corolla");
    myCar.setVuosiMalli(2020);
    std::cout << " Auton tiedot:\n";
    myCar.printData();
    std::cout << std::endl;

    
    Rectangle* rect = new Rectangle();
    rect->setWidth(5.5);
    rect->setHeight(3.0);

    std::cout << "Rectangle:\n";
    std::cout << "Area: " << rect->getArea() << std::endl;
    std::cout << "Circumference: " << rect->getCircum() << std::endl;

    delete rect;  
    std::cout << std::endl;

    auto student = std::make_unique<Student>();
    student->setName("Anna Virtanen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    std::cout << "Student info:\n";
    std::cout << "Name: " << student->getName() << std::endl;
    std::cout << "Student Number: " << student->getStudentNumber() << std::endl;
    std::cout << "Average: " << student->getAverage() << std::endl;

    return 0;
}