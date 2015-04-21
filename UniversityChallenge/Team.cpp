#include "Team.hpp"

Team::Team(University& university): university(&university){}

ostream& operator << (ostream& o, const Team& team) {
    o << team.students[0]->getName() << endl;
    o << team.students[1]->getName() << endl;
    o << team.students[2]->getName() << endl;
    o << team.students[3]->getName() << endl;
    return o;
}

void Team::addStudent(int member, Student& student){

    // int i = 0;
    // while (students[i] != 0){
    //     i++;
    //     if (i > 3){
    //         throw "Already 4 students";
    //         break;
    //     }
    // }

    students[member] = &student;

}

bool Team::checkTeam() const {

    Student* student;
    int age;
    University* studentUniversity;

    int captainCount = 0;
    int studentCount = 0;
    float totalAge = 0;

    cout << "HELLO" << endl;

    for (int i=0; i<4; i++){
        student = students[i];

        if (student == 0){
            continue;
        }

        cout << student->getName() << endl;

        studentCount += 1;

        age = student->getAge();
        if ((age < 18) || (age > 40)){
            return false;
        }

        totalAge += (float) age;

        if (student->getCaptain()){
            captainCount++;
        }

        studentUniversity = &student->getUniversity();

        if (studentUniversity == 0){
            return false;
        }

        if (*studentUniversity != *university){
            return false;
        }

    }

    if (captainCount != 1) return false;
    if (studentCount != 4) return false;
    if (totalAge/4 > 24) return false;

    return true;

}