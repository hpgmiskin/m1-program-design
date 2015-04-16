//
//  position.h
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#ifndef ProgramDesign_position_h
#define ProgramDesign_position_h

#include <iostream>
using namespace std;

// Predefine Territory to make friend class
class Territory;

class Position{

// Private position variables
private:
    float x;
    float y;
    
public:
    Position(float, float);
    
    void moveForward();
    void moveBackward();
    
    // Friend class to facilitate printing
    friend ostream& operator<< (ostream&, const Position&);
    
    // Class to create a copy of the position at a distance
    Position operator + (const Position&) const;

    // Friend class to allow copy contructor
    friend Territory;

};

#endif
