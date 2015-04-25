#include "System.hpp"

class Animal{

private:
    System* trackSystem;
    const char* name;
    const int number;
    Area area;

public:
    Animal(System&, const char*, const int, Area);
    void send(Position, int) const;
    Area& getArea();
};