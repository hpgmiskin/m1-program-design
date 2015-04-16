COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = goldfish._ position._ territory._

goldfish: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o goldfish

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=h)
goldfish.o: goldfish.cpp $(FILES:_=h)
position.o: position.cpp $(FILES:_=h)
territory.o: territory.cpp $(FILES:_=h)

.PHONY: clean run

clean:
	rm -f *.o goldfish