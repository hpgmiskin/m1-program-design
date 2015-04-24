messages: Position.o User.o main.o
	g++ -Wall -g Position.o User.o main.o -o messages

main.o: main.cpp Position.h User.h
	g++ -Wall -g -c main.cpp

User.o: User.cpp User.h Position.h
	g++ -Wall -g -c User.cpp

Position.o: Position.cpp Position.h
	g++ -Wall -g -c Position.cpp

clean:
	rm -f *.o messages