#include <iostream>
using namespace std;

#ifndef HEAD_EVENT
#define HEAD_EVENT

class Event{

private:
    friend ostream& operator << (ostream&, const Event&);

protected:
    float a;
    float b;
    float c;

public:
    Event(float, float, float);
    virtual ~Event();

    virtual float getPoints() const = 0;
};

#endif