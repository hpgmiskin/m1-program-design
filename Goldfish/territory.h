//
//  territory.h
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#ifndef ProgramDesign_territory_h
#define ProgramDesign_territory_h

#include "position.h"

class Territory{

private:
    Position northeast;
    Position southwest;
    
public:
    Territory(const Position&);
    Territory(const Position&, const Position&);
    
    void shrink();
    void expand();
    float getArea() const;
    bool contains(const Position&) const;
    
    // Printing functionality
    friend ostream& operator << (ostream&, const Territory&);
};

#endif
