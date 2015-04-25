#include "Device.hpp"

Device::Device(Battery battery): battery(battery){}

void Device::use(float hours){
    battery.consume(getConsumption(),hours);
}

void Device::recharge(float hours){
    battery.charge(hours);
}

float Device::getOperatingLife() const {
    return battery.available()/getConsumption();
}

Camera::Camera(Battery battery): Device(battery){
    consumption = 1500;
}

float Camera::getConsumption() const {
    return consumption;
}

Phone::Phone(Battery battery, int cores): Device(battery), cores(cores){
    apps = 0;
}

void Phone::runApps(int _apps){
    apps = _apps;
}

float Phone::getConsumption() const {
    float consumption = 500;
    if (apps > cores){
        consumption += (500 * cores);
    } else {
        consumption += (500 * apps);
    }
    return consumption;
}