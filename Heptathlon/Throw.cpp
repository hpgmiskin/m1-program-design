#include <cmath>
using namespace std;

#include "Throw.hpp"

Throw::Throw(float a, float b, float c, float D): Event(a,b,c), D(D){}

float Throw::getPoints() const {
    return a*pow((D-b),c);
}

ShotPut::ShotPut(float D): Throw(56.02,1.5,1.05,D){}

Javelin::Javelin(float D): Throw(15.98,3.8,1.04,D){}