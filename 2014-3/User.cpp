#include "Position.h"
#include "User.h"
#include <list>
#include <iostream>

using namespace std;

list<User*> User::Users; 

User::User(const Position& p, int credits):p(p),credits(credits){
	Users.push_back(this);
}
void User::buyCredits(int number){
	credits+=number;
}
int User::getCredits() const{
	return credits;
}
void User::move(const Position& newP){
	p.setX(newP.getX());
	p.setY(newP.getY());
}
bool User::canRecieve(const char* message, const Position& otherP, double radius) const{
	if(p.distance(otherP) <= radius){
		return true;
	}
	return false;
}
void User::broadcast(const char* message, double radius){
	cout << "Broadcasting message: " << message << endl;
	int recipients = 0;
	bool canSend = true;
	for (std::list<User*>::iterator it = Users.begin(); it != Users.end(); it++){
		if ((*it) == this){
			continue;
		}
		if(canRecieve(message,(*it)->getPosition(),radius)){
			recipients++;
		}
		if(recipients>credits){
			canSend = false;
			break;
		}
	}
	cout << "Number of recipients: " << recipients << endl;
	if(canSend){
		cout << "Message broadcast" << endl;
		credits-=recipients;
	}
}

const Position& User::getPosition() const{
	return p;
}

ostream& operator<<(ostream& o, const User& user){
	return o << "Postion: (x: " << user.p.getX() << ", y: " << user.p.getY() << ")\nCredits: " << user.getCredits() << endl;
}