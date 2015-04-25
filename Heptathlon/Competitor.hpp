#include <iostream>
using namespace std;

#include "Event.hpp"
#include "Jump.hpp"
#include "Run.hpp"
#include "Throw.hpp"

class Competitor{
private:
    const char* name;
    int age;

    Event* events[7];
    int event;

    friend ostream& operator << (ostream&, const Competitor&);

public:
    Competitor(const char*, int);
    ~Competitor();

    void takePart(Event*);
    float getPoints() const;
};