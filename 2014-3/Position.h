#ifndef POSITION_H
#define POSITION_H

#include <iostream>

class Position{
private:
	double x,y;
public:
	Position(double x, double y);
	double distance(const Position& otherP) const;
	double getX() const;
	double getY() const;
	void setX(double _x);
	void setY(double _y);
	friend std::ostream& operator<<(std::ostream& o, const Position p);
};

#endif