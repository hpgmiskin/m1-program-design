#include "Attendant.hpp"

#include <iostream>
using namespace std;

int main(){

    SeniorAttendant charon = SeniorAttendant("Charon",666);
    FixedPenalty fine1 = FixedPenalty("16/02/2006","09h50","LO52RNA",26);
    charon.issueFine(fine1);

    cout << fine1;
    fine1.setMaxFine(120);
    cout << fine1;

    JuniorAttendant nelson = JuniorAttendant("Nelson",111);
    ExcessCharge fine2 = ExcessCharge("17/02/2006","10h15","B14NCA",14,15);

    nelson.issueFine(fine2);
    cout << fine2;

    cout << nelson.getSalary() << endl;

    return 0;
}