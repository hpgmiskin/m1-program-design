#include "System.hpp"

Reading::Reading(const int number, Position position, float power):
    number(number), position(position), power(power){}

System::System(){}

void System::add(const int number, Area& area){
    table.set(number,area);
}

void System::recieve(Reading& reading){

    Area area = *table.get(reading.number);

    cout << "Animal with tag " << reading.number;

    if (area.contains(reading.position)){
        cout << " is within protected area." << endl;
    } else {
        cout << " is outside the protected area!" << endl;
    }

    if (reading.power < 20){
        cout << "Warning tag " << reading.number << " battery low!" << endl;
    }
}