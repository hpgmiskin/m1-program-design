#include <iostream>
using namespace std;

#include "Animal.hpp"

int main(){

    System trackSystem = System();

    Animal lassie = Animal(trackSystem,"Lassie",111,Area(Position(0,0),Position(5,5)));
    Animal garfield = Animal(trackSystem,"Garfield",222,Area(Position(3,4),Position(7,8)));

    trackSystem.add(111,lassie.getArea());
    trackSystem.add(222,garfield.getArea());

    lassie.send(Position(3,3),15);
    garfield.send(Position(8,8),50);

    return 0;
}