#include "Fine.hpp"

float ParkingFine::maxFine = 100;

ParkingFine::ParkingFine(char* _date, char* _time, char* _reg, int _code){
    date = _date;
    time = _time;
    registration = _reg;
    offenceCode = _code;
}

void ParkingFine::setMaxFine(float _maxFine){
    maxFine = _maxFine;
}

ostream& operator << (ostream& o, const ParkingFine& fine){
    o << fine.date << " " << fine.time << " " << fine.registration
      << fine.registration << " £" << fine.getFine() << endl;
    return o;
}

FixedPenalty::FixedPenalty(char* _date, char* _time, char* _reg, int _code):
    ParkingFine(_date, _time, _reg, _code){}

float FixedPenalty::getFine() const {
    return maxFine;
}

ExcessCharge::ExcessCharge(char* _date, char* _time, char* _reg, int _code, int _minutes):
    ParkingFine(_date, _time, _reg, _code){
        minutes = _minutes;
    }

float ExcessCharge::getFine() const {
    float fine = baseCharge + minuteCharge * minutes;
    if (fine > maxFine) return maxFine;
    return fine;
}