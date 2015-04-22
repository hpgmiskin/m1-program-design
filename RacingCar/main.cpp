#include <iostream>
using namespace std;

#include "Car.hpp"

int main(){

    Driver lewis = Driver("Lewis Hamilton",67);

    TurboCharge2000 turbo = TurboCharge2000(91,250,5);
    SupermanV3 super = SupermanV3(87,175,4);

    Car nr14 = Car("NR-14",582,turbo);
    Car tfd2 = Car("TFD-2",411,super);

    nr14.setDriver(lewis);
    cout << nr14.raceCar(1000) << endl;

    tfd2.setDriver(lewis);
    cout << tfd2.raceCar(1500) << endl;

    nr14.setMinMass(550);

    nr14.setDriver(lewis);
    cout << nr14.raceCar(1000) << endl;

    tfd2.setDriver(lewis);
    cout << tfd2.raceCar(1500) << endl;

    return 0;
}