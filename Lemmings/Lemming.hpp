#include "Room.hpp"

class Lemming{
private:
    static string DLM;
    string name;
    Room* room;
    friend ostream& operator << (ostream&, const Lemming&);
public:
    Lemming(string, Room&);
    void wakeUp();
    void setDLM(string);
};