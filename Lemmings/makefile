COMPL = g++
FLAGS = -g -std=c++11
FILES = Room._ Lemming._

Lemmings: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o Lemmings

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Room.o: Room.cpp $(FILES:_=hpp)
Lemming.o: Lemming.cpp $(FILES:_=hpp)