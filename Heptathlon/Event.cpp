#include "Event.hpp"

Event::Event(float a, float b, float c): a(a), b(b), c(c){}

Event::~Event(){}

ostream& operator << (ostream& o, const Event& e){
    return o << e.a << " - " << e.b << " - " << e.c;
}