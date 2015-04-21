#include "Room.hpp"

Room::Room(string _name){
    name = _name;
}

void Room::setEast(Room* east){
    toEast = east;
}

void Room::setWest(Room* west){
    west->setEast(this);
    toWest = west;
}

string Room::getName() const {
    return name;
}

Room* Room::getEast() const {
    return toEast;
}

Room* Room::getWest() const {
    return toWest;
}