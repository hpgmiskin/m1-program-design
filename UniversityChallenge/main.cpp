#include <iostream>
using namespace std;

#include "Team.hpp"

int main(){
    cout << "Hello World" << endl;

    University imperial = University("Imperial");
    cout << imperial.getName() << endl;

    Team team = Team(imperial);
    cout << "team created" << endl;

    Student ivor = Student("Ivor Bigbrain",20,imperial);
    team.addStudent(0,ivor);
    Student prez = Student("Prezza Buzza",18,imperial);
    team.addStudent(1,prez);
    Student ivon = Student("Ivonna Singh",25,imperial,true);
    team.addStudent(2,ivon);
    Student yuma = Student("Yuman Google",32,imperial);
    team.addStudent(3,yuma);

    cout << team;

    prez.graduate();

    cout << "grad" << endl;

    cout << team.checkTeam() << endl;

    return 0;
}