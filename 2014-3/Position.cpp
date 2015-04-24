#include "Position.h"
#include <cmath>

Position::Position(double x, double y):x(x),y(y){};

double Position::distance(const Position& otherP) const{
	double result = sqrt((x - otherP.getX())*(x - otherP.getX()) + (y - otherP.getY())*(y - otherP.getY()));
	std::cout << "Distance between " << *this << " and " << otherP << " is " << result << "\n";
	return result;
}
double Position::getX() const{
	return x;
}
double Position::getY() const{
	return y;
}

void Position::setX(double _x) {
	x = _x;
}

void Position::setY(double _y) {
	y = _y;
}

std::ostream& operator<<(std::ostream& o, const Position p){
	return o << "(" << p.getX() << ", " << p.getY() << ")";
}