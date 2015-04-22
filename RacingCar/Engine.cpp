#include <cmath>
using namespace std;

#include "Engine.hpp"

Engine::Engine(float mass, float powerFactor, int cylinders):
    mass(mass), powerFactor(powerFactor), cylinders(cylinders){}

float Engine::getMass() const {
    return mass;
}

TurboCharge2000::TurboCharge2000(float mass, float powerFactor, int cylinders):
    Engine(mass, powerFactor, cylinders){}

float TurboCharge2000::getTime(float mass, float distance) const {
    // cout << "TIme time" << distance << mass << powerFactor << cylinders << endl;
    return mass * distance * (1 - log(1+exp(-distance)))/(powerFactor*cylinders*cylinders);
}

SupermanV3::SupermanV3(float mass, float powerFactor, int cylinders):
    Engine(mass, powerFactor, cylinders){}

float SupermanV3::getTime(float mass, float distance) const {
    // cout << "TIme time" << distance << mass << powerFactor << cylinders << endl;
    return sqrt((2*mass*distance)/(powerFactor*cylinders));
}


