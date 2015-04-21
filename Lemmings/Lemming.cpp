#include "Lemming.hpp"

string Lemming::DLM = string("East");

Lemming::Lemming(string _name, Room& _room){
    name = _name;
    room = &_room;
}

void Lemming::wakeUp(){

    if (DLM == string("West")){
        room = room->getWest();
    } else if (DLM == string("East")){
        room = room->getEast();
    } else {
        cerr << "DLM neither east nor West!" << endl;
    }

}

void Lemming::setDLM(string _DLM){
    DLM = _DLM;
}

ostream& operator << (ostream& o, const Lemming& lemming) {
    o << "Lemming " << lemming.name
      << " is in " << lemming.room->getName() << endl;

    return o;   
}