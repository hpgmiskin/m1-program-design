#ifndef USER_H
#define USER_H
#include <iostream>
#include <list>
#include "Position.h"

class User{
private:
	static std::list<User*> Users;
	Position p;
	int credits;
public:
	User(const Position& p, int credits);
	void buyCredits(int number);
	int getCredits() const;
	void move(const Position& newP);
	bool canRecieve(const char* message, const Position& otherP, double radius) const;
	void broadcast(const char* message, double radius);
	const Position& getPosition() const;
	friend std::ostream& operator<<(std::ostream& o, const User& user);
};

#endif