//
//  territory.cpp
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#include <stdio.h>
#include "territory.h"

Territory::Territory(const Position& northeast, const Position& southwest): northeast(northeast), southwest(southwest){};

Territory::Territory(const Position& center): northeast(center), southwest(center){
    cout << *this << endl;
    expand();
    cout << *this << endl;
}

float Territory::getArea() const {
    return (northeast.x - southwest.x) * (northeast.y - southwest.y);
}

void Territory::shrink(){
    northeast.moveBackward();
    southwest.moveForward();
}

void Territory::expand(){
    northeast.moveForward();
    southwest.moveBackward();
}

bool Territory::contains(const Position& position) const {
    return (
            (position.x < northeast.x) &&
            (position.y < northeast.y) &&
            (position.x > southwest.x) &&
            (position.y > southwest.y)
            );
}

ostream& operator << (ostream& o, const Territory& territory){
    o << "Southwest: " << territory.southwest << " " << "Northeast: " << territory.northeast << "Area: " << territory.getArea() << endl;
    return o;
}