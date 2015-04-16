//
//  position.cpp
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#include <stdio.h>
#include "position.h"

Position::Position(float x, float y): x(x), y(y){};

void Position::moveBackward(){
    x = x - 1;
    y = y - 1;
};

void Position::moveForward(){
    x = x + 1;
    y = y + 1;
};

Position Position::operator + (const Position& position) const {
    return Position(x+position.x,y+position.y);
};

ostream& operator << (ostream& o, const Position& position){
    o << "(" << position.x << ", " << position.y << ")";
    return o;
};