COMPL = g++
FLAGS = -Wall -g -std=c++11

Run: $(FILES:_=o) Table.o main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o Run

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Table.o: Table.cpp $(FILES:_=hpp)

.PHONY: clean run

clean:
	rm *.o Run

run:
	./Run