//
//  goldfish.h
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#ifndef ProgramDesign_goldfish_h
#define ProgramDesign_goldfish_h

#include "territory.h"

class Goldfish{

private:
    Position position;
    Territory territory;

    string name;
    float size;
    
    void giveBirth();
    void triumph();
    void retreat();
    
    static int population;
    static float getGTB();
    
public:
    Goldfish(const Position&, string name = "unknown", float size = 2.3);
    void attack(Goldfish& defender);
    
    // operator definition to allow printing
    friend ostream& operator << (ostream&, const Goldfish&);
};

#endif
