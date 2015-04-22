#include "Driver.hpp"

Driver::Driver(char* name, float mass): name(name), mass(mass){}

float Driver::getMass() const {
    return mass;
}