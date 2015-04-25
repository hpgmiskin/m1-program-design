// #include <iostream>
// using namespace std;

#include "Competitor.hpp"

Competitor::Competitor(const char* name, int age): name(name), age(age){
    event = 0;
}

Competitor::~Competitor(){
    for (int i=0; i<event; i++){
        delete events[i];
    }
}

ostream& operator << (ostream& o, const Competitor& c){
    return o << c.name << " (" << c.age << ") - Points: "
             << c.getPoints() << " (over " << c.event << " events)";
}

void Competitor::takePart(Event* _event){
    events[event] = _event;
    event += 1;
}

float Competitor::getPoints() const {
    float points = 0;
    for (int i=0; i<event; i++){
        points += events[i]->getPoints();
        // cout << *events[i] << " = " << points << endl;
    }
    return points;
}