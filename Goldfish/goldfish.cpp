//
//  goldfish.cpp
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

#include "goldfish.h"

int Goldfish::population = 0;

float Goldfish::getGTB(){
    return 60/population;
}

Goldfish::Goldfish(const Position& position, string name, float size): position(position), territory(position){
    this->name = name;
    this->size = size;
    
    population = population + 1;
    };

void Goldfish::attack(Goldfish& defender){
    
    // Check for retreat
    if (defender.territory.contains(position))
    {
        retreat();
    }
    else if (size > 1 + defender.size)
    {
        triumph();
        defender.retreat();
    }
    else
    {
        defender.giveBirth();
    }
}

void Goldfish::giveBirth(){
    Goldfish* goldfish1 = new Goldfish(position,"baby 1");
    Goldfish* goldfish2 = new Goldfish(position + Position(-4,-4),"baby 2");
    Goldfish* goldfish3 = new Goldfish(position + Position(4,-4),"baby 3");
    Goldfish* goldfish4 = new Goldfish(position + Position(-4,4),"baby 4");
    Goldfish* goldfish5 = new Goldfish(position + Position(4,4),"baby 5");
}

void Goldfish::triumph(){
    size = size + 0.3;
    
    Territory newTerritory = territory;
    newTerritory.expand();
    
    if (newTerritory.getArea() <= getGTB()){
        territory = newTerritory;
    }
}

void Goldfish::retreat(){
    size = size - 0.2;
    position.moveBackward();
    
    Territory newTerritory = territory;
    newTerritory.shrink();
    
    if (newTerritory.getArea() >= 1.2){
        territory = newTerritory;
    }
}

ostream& operator << (ostream& o, const Goldfish& goldfish){
    o << goldfish.name << "  " << goldfish.size << endl;
    o << "Position " << goldfish.position << endl;
    o << "Territory " << goldfish.territory << endl;
    return o;
};