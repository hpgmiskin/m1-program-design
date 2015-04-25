#include "Event.hpp"

class Throw: public Event{
private:
    float D;
public:
    Throw(float,float,float,float);
    virtual float getPoints() const;
};

class ShotPut: public Throw{
public:    
    ShotPut(float);
};

class Javelin: public Throw{
public:    
    Javelin(float);
};