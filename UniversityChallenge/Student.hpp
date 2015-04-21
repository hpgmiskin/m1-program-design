#include "University.hpp"

class Student{

private:
    char* name;
    int age;
    bool captain;
    University* university;

public:
    Student(char*, int, University&, bool captain=false);
    void graduate();

    University& getUniversity() const;
    char* getName() const;
    int getAge() const;
    bool getCaptain() const;
};