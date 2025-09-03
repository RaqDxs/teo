#include "student.h"
#include <iostream>

Student::Student(std::string cui, std::string nombres, std::string paterno, std::string materno) {
    this->cui = cui;
    this->nombres = nombres;
    this->paterno = paterno;
    this->materno = materno;
}

void Student::presentarse() {
    //formato sugerido: CUI-PATERNO/MATERNO,NOMBRES
    std::cout << this->cui << "-" << this->paterno << "/" << this->materno << "," << this->nombres << std::endl;
}