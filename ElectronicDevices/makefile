COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = Device._ Battery._

ElectronicDevices: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o ElectronicDevices

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
Device.o: Device.cpp $(FILES:_=hpp)
Battery.o: Battery.cpp $(FILES:_=hpp)


.PHONY: clean run

clean:
	rm -f *.o ElectronicDevices

run:
	./ElectronicDevices