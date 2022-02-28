CXX=g++
CXXFLAGS=-c -Wall --std=c++11

ifeq ($(OS), Windows_NT)
	RM := del
	MAIN := main.exe
	SECOND := second.exe
else
	RM := rm
	MAIN := ./main
	SECOND := ./second
endif

all: main second

main: main.o
	$(CXX) main.o -o main

second: second.o
	$(CXX) second.o -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

second.o: second.cpp
	$(CXX) $(CXXFLAGS) second.cpp


clean:
	$(RM) *.o *.gch *.txt

run: all
	$(MAIN) 12 out.txt
	$(SECOND)