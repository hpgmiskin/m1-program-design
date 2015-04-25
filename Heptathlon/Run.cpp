#include <cmath>
using namespace std;

#include "Run.hpp"

Run::Run(float a, float b, float c, float T): Event(a,b,c), T(T){}

float Run::getPoints() const {
    return a*pow((b-T),c);
}

Hurdles100::Hurdles100(float T): Run(9.23,26.7,1.835,T){};

Run200::Run200(float T): Run(4.99,42.5,1.81,T){};

Run800::Run800(float T): Run(0.112,254,1.88,T){};