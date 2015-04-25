#include "Battery.hpp"

Battery::Battery(float maxCapacity, float rechargePower):
    maxCapacity(maxCapacity), rechargePower(rechargePower){
        availableCapacity = maxCapacity;
    }

ostream& operator << (ostream& o, const Battery& b){
    return o << b.availableCapacity << b.maxCapacity << b.rechargePower;
}

float Battery::available() const {
    return availableCapacity;
}

void Battery::charge(float hours){
    availableCapacity += (rechargePower * hours);

    if (availableCapacity > maxCapacity){
        availableCapacity = maxCapacity;
    }
}

void Battery::consume(float power, float hours){
    availableCapacity -= (power * hours);

    if (availableCapacity < 0){
        // Error should go here
        availableCapacity = 0;
    }
}