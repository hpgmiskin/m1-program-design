#include "Event.hpp"

class Jump: public Event{
private:
    float M;
public:
    Jump(float,float,float,float);
    virtual float getPoints() const;
};

class HighJump: public Jump{
public:    
    HighJump(float);
};

class LongJump: public Jump{
public:    
    LongJump(float);
};