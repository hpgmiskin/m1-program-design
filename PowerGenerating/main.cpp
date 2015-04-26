#include <iostream>
#include <cmath>
using namespace std;

// =============================================================================
// Header Files
// =============================================================================

class PowerDevice{
protected:
    float efficiency;

public:
    PowerDevice(float);
    virtual float getWeight() const = 0;
    virtual float getPower(float, float) const = 0;
};

class SolarPanel: public PowerDevice{
private:
    float surfaceArea;
    float surfaceWeight;
public:
    SolarPanel(float, float);
    virtual float getWeight() const;
    virtual float getPower(float, float) const;
};

class WindTurbine: public PowerDevice{
private:
    float bladeDiameter;
    float weight;
    static float maxSpeed;
public:
    WindTurbine(float,float);
    static void setMaxSpeed(float);
    virtual float getWeight() const;
    virtual float getPower(float, float) const;
};

class Home{
private:
    int bedrooms;
    float maxWeight;
    int deviceCount;
    PowerDevice* powerDevices[10];
    float getTotalWeight() const;
public:
    Home(int,float);
    float getTotalPower() const;
    void addPowerDevice(PowerDevice*);
};

// =============================================================================
// Main File
// =============================================================================

int main(){

    Home home = Home(3,300);

    SolarPanel solarPanel = SolarPanel(0.5,0.6);
    home.addPowerDevice(&solarPanel);

    WindTurbine windTurbine = WindTurbine(0.5,0.6);
    home.addPowerDevice(&windTurbine);

    windTurbine.setMaxSpeed(10);

    float totalPower = home.getTotalPower();
    cout << totalPower << endl;

    return 0;
}

// =============================================================================
// Implementation Files
// =============================================================================

PowerDevice::PowerDevice(float efficiency): efficiency(efficiency){}

SolarPanel::SolarPanel(float efficiency, float surfaceArea):
    PowerDevice(efficiency), surfaceArea(surfaceArea), surfaceWeight(50){}

float SolarPanel::getWeight() const {
    return surfaceArea * surfaceWeight;
}

float SolarPanel::getPower(float luminance, float windSpeed) const {
    return surfaceArea * luminance;
}

float WindTurbine::maxSpeed = 0;

WindTurbine::WindTurbine(float efficiency, float bladeDiameter):
    PowerDevice(efficiency), bladeDiameter(bladeDiameter), weight(150){}

void WindTurbine::setMaxSpeed(float _maxSpeed){
    maxSpeed = _maxSpeed;
}

float WindTurbine::getWeight() const {
    return weight;
}

float WindTurbine::getPower(float luminance, float windSpeed) const {
    float rotationSpeed = maxSpeed;
    if (windSpeed < maxSpeed) rotationSpeed = windSpeed;
    return pow(bladeDiameter,2) * pow(rotationSpeed,3);
}

Home::Home(int bedrooms, float maxWeight): bedrooms(bedrooms), maxWeight(maxWeight){
    deviceCount = 0;
    // powerDevices = new PowerDevice [bedrooms];
}


float Home::getTotalWeight() const {
    float totalWeight = 0;
    for (int i=0; i<deviceCount; i++){
        totalWeight += powerDevices[i]->getWeight();
    }
    return totalWeight;
}

float Home::getTotalPower() const {
    float totalPower = 0;
    float luminance(10), windSpeed(20);
    for (int i=0; i<deviceCount; i++){
        totalPower += powerDevices[i]->getPower(luminance,windSpeed);
    }
    return totalPower;  
}

void Home::addPowerDevice(PowerDevice* powerDevice){
    powerDevices[deviceCount] = powerDevice;
    deviceCount++;

    if (getTotalWeight() > maxWeight){}
    else if (deviceCount > bedrooms){}
    else return;

    deviceCount--;
    powerDevices[deviceCount] = 0;
}


