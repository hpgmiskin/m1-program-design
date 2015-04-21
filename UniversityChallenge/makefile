COMPL = g++
FLAGS = -Wall -g -std=c++11
FILES = University._ Student._ Team._

UniversityChallenge: $(FILES:_=o) main.o
	$(COMPL) $(FLAGS) $(FILES:_=o) main.o -o UniversityChallenge

%.o: %.cpp
	$(COMPL) $(FLAGS) -c $<

main.o: main.cpp $(FILES:_=hpp)
University.o: University.cpp $(FILES:_=hpp)
Student.o: Student.cpp $(FILES:_=hpp)
Team.o: Team.cpp $(FILES:_=hpp)