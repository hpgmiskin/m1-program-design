#include "Student.hpp"

Student::Student(char* name, int age, University& university, bool captain): 
    name(name), age(age), university(&university), captain(captain){}

void Student::graduate(){
    university = 0;
}

University& Student::getUniversity() const {
    return *university;
}

char* Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

bool Student::getCaptain() const {
    return captain;
}