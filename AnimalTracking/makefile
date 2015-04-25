COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = Area._ Animal._ System._

AnimalTracking: $(FILES:_=o) main.o Table.o
	$(COMPL) $(FLAGS) $(FILES:_=o) Table.o main.o -o AnimalTracking

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Table.o: Table.cpp Table.cpp $(FILES:_=hpp)
Area.o: Area.cpp $(FILES:_=hpp)
Animal.o: Animal.cpp $(FILES:_=hpp)
System.o: System.cpp $(FILES:_=hpp)


.PHONY: clean run

clean:
	rm -f *.o AnimalTracking

run:
	./AnimalTracking