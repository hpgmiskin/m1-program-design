#include "Table.cpp"
#include "Area.hpp"

class System;

class Reading{

private:
    const int number;
    Position position;
    float power;
    friend System;

public:
    Reading(const int, Position, float);
};

class System{

private:
    Table<int,Area> table;

public:
    System();
    void recieve(Reading&);
    void add(const int, Area&);
};