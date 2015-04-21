#include <iostream>
using namespace std;

#include "Lemming.hpp"

int main(){

    Room r1 = Room("Room 1");
    Room r2 = Room("Room 2");
    Room r3 = Room("Room 3");

    r1.setWest(&r2);
    r2.setWest(&r3);
    r3.setWest(&r1);

    Lemming lala = Lemming("Lala",r1);
    Lemming lilo = Lemming("Lilo",r3);

    cout << lala << lilo << endl;

    lilo.wakeUp();
    lilo.wakeUp();
    lala.wakeUp();


    cout << lala << lilo << endl;

    lala.setDLM("West");
    lilo.wakeUp();

    cout << lala << lilo << endl;

    return 0;
}