COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = Shop._ Bike._ Customer._

BikeShop: $(FILES:_=o) Table.o main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o BikeShop

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Table.o: Table.cpp $(FILES:_=hpp)
Shop.o: Shop.cpp $(FILES:_=hpp)
Bike.o: Bike.cpp $(FILES:_=hpp)
Customer.o: Customer.cpp $(FILES:_=hpp)

.PHONY: clean run

clean:
	rm -f *.o BikeShop

run:
	./BikeShop