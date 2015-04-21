#include "Fine.hpp"

class ParkingAttendant{
private:
    char* name;
    int badgeNumber;
    int fines = 0;
    ParkingFine* parkingFines[1000];
protected:
    float getTotalFines() const;
public:
    ParkingAttendant(char*,int);
    virtual float getSalary() const = 0;
    void issueFine(ParkingFine&);
};

class SeniorAttendant: public ParkingAttendant{
private:
    float baseSalary = 1200;
    float commission = 0.1;
public:
    SeniorAttendant(char*,int);
    virtual float getSalary() const;
};

class JuniorAttendant: public ParkingAttendant{
private:
    float baseSalary = 900;
    float commission = 0.05;
public:
    JuniorAttendant(char*,int);
    virtual float getSalary() const;
};