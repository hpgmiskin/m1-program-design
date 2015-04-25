#include "Area.hpp"

Position::Position(float x, float y): x(x), y(y){}

ostream& operator << (ostream& o, const Position& p){
    return o << "(" << p.x << "," << p.y << ")";
}

Area::Area(Position southWest, Position northEast):
    southWest(southWest), northEast(northEast){}

ostream& operator << (ostream& o, const Area& a){
    return o << "{ " << a.southWest << " - " << a.northEast << " }";
}

bool Area::contains(Position& position) const {

    if (position.x > northEast.x){}
    else if (position.y > northEast.y){}
    else if (position.x < southWest.x){}
    else if (position.y < southWest.y){}
    else {return true;}

    return false;
}