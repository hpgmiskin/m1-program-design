#include <iostream>
using namespace std;

class ParkingFine{
private:
    char* date;
    char* time;
    char* registration;
    int offenceCode;
protected:
    static float maxFine;
public:
    ParkingFine(char*,char*,char*,int);
    virtual float getFine() const = 0;
    static void setMaxFine(float maxFine);
    friend ostream& operator << (ostream&, const ParkingFine&);
};

class FixedPenalty : public ParkingFine{
public:
    FixedPenalty(char*,char*,char*,int);
    virtual float getFine() const;
};

class ExcessCharge : public ParkingFine{
private:
    int baseCharge = 20;
    int minuteCharge = 5;
    int minutes;
public:
    ExcessCharge(char*,char*,char*,int,int);
    virtual float getFine() const;
};