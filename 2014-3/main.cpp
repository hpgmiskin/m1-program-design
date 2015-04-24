#include <iostream>
#include "User.h"
#include "Position.h"

using namespace std;

int main(){
	User Alice(Position(3.0,0.5),5);
	User Bob(Position(10.0,5.0),0);
	User Charles(Position(7.0,7.0),2);

	cout << "Alice: " << Alice << endl;
	cout << "Bob: " << Bob << endl;
	cout << "Charles: "<< Charles << endl;

	Alice.broadcast("Hello!",10);
	Alice.move(Position(3.0,3.0));

	cout << "Alice: " << Alice << endl;
	cout << "Bob: " << Bob << endl;
	cout << "Charles: "<< Charles << endl;

	Charles.broadcast("Come to my party",0);

	cout << "Alice: " << Alice << endl;
	cout << "Bob: " << Bob << endl;
	cout << "Charles: "<< Charles << endl;

	Bob.buyCredits(10);

	cout << "Alice: " << Alice << endl;
	cout << "Bob: " << Bob << endl;
	cout << "Charles: "<< Charles << endl;

}