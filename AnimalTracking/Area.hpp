#include "iostream"
using namespace std;

class Area;

class Position{

private:
    float x;
    float y;
    friend Area;
    friend ostream& operator << (ostream&, const Position&);

public:
    Position(float, float);

};

class Area{

private:
    Position southWest;
    Position northEast;
    friend ostream& operator << (ostream&, const Area&);

public:
    Area(Position,Position);
    bool contains(Position&) const;
};