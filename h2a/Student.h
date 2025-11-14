#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    // Setters
    void setName(const std::string& name);
    void setStudentNumber(int number);
    void setAverage(double avg);

    // Getters
    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif // STUDENT_H