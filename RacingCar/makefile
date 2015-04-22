COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = Engine._ Driver._ Car._

RacingCar: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o RacingCar

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Engine.o: Engine.cpp $(FILES:_=hpp)
Driver.o: Driver.cpp $(FILES:_=hpp)
Car.o: Car.cpp $(FILES:_=hpp)

.PHONY: clean run

clean:
	rm -f *.o RacingCar

run:
	./RacingCar