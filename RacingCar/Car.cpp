#include "Car.hpp"

float Car::minMass = 642;

Car::Car(char* modelName, float mass, Engine& engine): 
    modelName(modelName), mass(mass), engine(&engine){}

void Car::setMinMass(float _minMass){
    minMass = _minMass;
}

void Car::setDriver(Driver& _driver){
    driver = &_driver;
}

float Car::racingMass() const {
    return mass + driver->getMass() + engine->getMass();
}

float Car::raceCar(float distance) const {
    float currentMass = racingMass();

    if (currentMass < minMass){
        currentMass = minMass;
    }

    return engine->getTime(currentMass,distance);
}