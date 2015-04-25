#include <iostream>
using namespace std;

#include "Device.hpp"

int main(){

    Camera canon = Camera(Battery(6000,500));

    canon.use(1.5);
    canon.recharge(0.5);
    cout << canon.getOperatingLife() << endl;

    Phone samsung = Phone(Battery(4000,800),2);

    samsung.runApps(3);
    samsung.use(2);
    cout << samsung.getOperatingLife() << endl;

    return 0;
}