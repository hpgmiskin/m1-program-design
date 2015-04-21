COMPL = g++
FLAGS = -g -std=c++11
FILES = Fine._ Attendant._

Parking: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o Parking

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Fine.o: Fine.cpp $(FILES:_=hpp)
Attendant.o: Attendant.cpp $(FILES:_=hpp)