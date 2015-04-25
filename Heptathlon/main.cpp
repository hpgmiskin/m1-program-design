#include <iostream>
#include <cmath>
using namespace std;

#include "Competitor.hpp"

int main(){

    Competitor jess = Competitor("Jessica Ennis",28);

    jess.takePart(new Hurdles100(12.54));    
    jess.takePart(new HighJump(186));
    jess.takePart(new ShotPut(14.28));
    jess.takePart(new Run200(22.88));
    jess.getPoints();

    cout << jess << endl;

    jess.takePart(new LongJump(648));    
    jess.takePart(new Javelin(47.49));
    jess.takePart(new Run800(2*60+8.65));
    jess.getPoints();

    cout << jess << endl;

    return 0;
}