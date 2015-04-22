#include "Engine.hpp"
#include "Driver.hpp"

class Car{
private:
    char* modelName;
    static float minMass;
    float mass;

    Engine* engine;
    Driver* driver;

    float racingMass() const;

public:
    Car(char*,float,Engine&);

    static void setMinMass(float);
    void setDriver(Driver&);
    float raceCar(float) const;
};