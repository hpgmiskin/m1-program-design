#include "Event.hpp"

class Run: public Event{
private:
    float T;
public:
    Run(float,float,float,float);
    virtual float getPoints() const;
};

class Hurdles100: public Run{
public:    
    Hurdles100(float);
};

class Run200: public Run{
public:    
    Run200(float);
};

class Run800: public Run{
public:    
    Run800(float);
};