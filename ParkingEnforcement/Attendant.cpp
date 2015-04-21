#include "Attendant.hpp"

ParkingAttendant::ParkingAttendant(char* _name, int _badgeNumber){
    name = _name;
    badgeNumber = _badgeNumber;
}

void ParkingAttendant::issueFine(ParkingFine& parkingFine){
    parkingFines[fines] = &parkingFine;
    fines++;
}

float ParkingAttendant::getTotalFines() const {

    float total = 0;
    for (int i=0; i<fines; i++){
        total += parkingFines[i]->getFine();
    }

    return total;
}

SeniorAttendant::SeniorAttendant(char* _name, int _badgeNumber): 
    ParkingAttendant(_name,_badgeNumber){}


float SeniorAttendant::getSalary() const {
    return baseSalary + commission * getTotalFines();
}

JuniorAttendant::JuniorAttendant(char* _name, int _badgeNumber): 
    ParkingAttendant(_name,_badgeNumber){}


float JuniorAttendant::getSalary() const {
    return baseSalary + commission * getTotalFines();
}