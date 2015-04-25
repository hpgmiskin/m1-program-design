#include "Battery.hpp"

class Device{

private:
    Battery battery;

protected:
    virtual float getConsumption() const = 0;

public:
    Device(Battery);
    float getOperatingLife() const;
    void use(float);
    void recharge(float);
};


class Camera: public Device{

private:
    float consumption;

protected:
    virtual float getConsumption() const;

public:
    Camera(Battery);
};

class Phone: public Device{

private:
    int cores;
    int apps;

protected:
    virtual float getConsumption() const;

public:
    Phone(Battery, int);
    void runApps(int);

};