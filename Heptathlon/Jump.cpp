#include <cmath>
using namespace std;

#include "Jump.hpp"

Jump::Jump(float a, float b, float c, float M): Event(a,b,c), M(M){}

float Jump::getPoints() const {
    return a*pow((M-b),c);
}

HighJump::HighJump(float M): Jump(1.85,75,1.348,M){}

LongJump::LongJump(float M): Jump(0.1889,210,1.41,M){}
