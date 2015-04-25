#include "Animal.hpp"

Animal::Animal(System& trackSystem, const char* name, const int number, Area area):
    trackSystem(&trackSystem), name(name), number(number), area(area){}

void Animal::send(Position position, int power) const {
    Reading reading = Reading(number,position,power);
    trackSystem->recieve(reading);
}

Area& Animal::getArea(){
    return area;
}