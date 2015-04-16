//
//  main.cpp
//  ProgramDesign
//
//  Created by Henry Miskin on 16/04/2015.
//  Copyright (c) 2015 HenryMiskin. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#include "goldfish.h"

int main(int argc, const char * argv[]) {

    Goldfish peter = Goldfish(Position(5,6),"Peter",6.3);
    Goldfish paul = Goldfish(Position(2,2),"Paul",2.3);
    Goldfish john = Goldfish(Position(5,6),"John",4.3);
    
    cout << "Initial Standing" << endl;
    cout << peter << paul << john << endl;
    
    // Peter attacks Paul
    peter.attack(paul);
    
    cout << "Peter Attacks Paul" << endl;
    cout << peter << paul << endl;
    
    // Paul attacks john
    paul.attack(john);
    
    cout << "Paul Attacks John" << endl;
    cout << paul << john << endl;
    
    Goldfish matthew = Goldfish(Position(6,10),"Matthew");
    
    cout << peter << paul << john << matthew << endl;
    
    return 0;
}
