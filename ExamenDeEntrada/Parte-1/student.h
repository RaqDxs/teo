#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string nombres;
    std::string paterno;
    std::string materno;
    std::string cui;

public:
    Student(std::string cui, std::string nombres, std::string paterno, std::string materno);
    void presentarse();
};

#endif