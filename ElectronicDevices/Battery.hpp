#include <iostream>
using namespace std;

class Battery{

private:
    float maxCapacity;
    float availableCapacity;
    float rechargePower;
    friend ostream& operator << (ostream&, const Battery&);

public:
    Battery(float,float);
    float available() const;
    void consume(float, float);
    void charge(float);

};