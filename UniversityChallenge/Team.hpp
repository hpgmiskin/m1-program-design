#include "Student.hpp"

#include <iostream>
using namespace std;

class Team{

private:
    University* university;
    Student *students[4];

public:
    Team(University&);

    void addStudent(int member, Student& student);
    bool checkTeam() const;

    friend ostream& operator << (ostream&, const Team&);
};