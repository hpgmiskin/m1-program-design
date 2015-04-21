#include <iostream>
#include <string>
using namespace std;

class Room;

class Room{
private:
    string name;
    Room* toWest;
    Room* toEast;
public:
    Room(string);
    void setEast(Room*);
    void setWest(Room*);
    string getName() const;
    Room* getWest() const;
    Room* getEast() const;
};