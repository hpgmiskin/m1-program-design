COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = Competitor._ Event._ Run._ Jump._ Throw._

Heptathlon: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o Heptathlon

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Competitor.o: Competitor.cpp $(FILES:_=hpp)
Event.o: Event.cpp $(FILES:_=hpp)
Run.o: Run.cpp $(FILES:_=hpp)
Jump.o: Jump.cpp $(FILES:_=hpp)
Throw.o: Throw.cpp $(FILES:_=hpp)

.PHONY: clean run

clean:
	rm -f *.o Heptathlon

run:
	./Heptathlon