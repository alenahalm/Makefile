CXX=g++
CXXFLAGS=-c -Wall --std=c++11

ifeq ($(OS), Windows_NT)
	RM := del
	BINARY_MAIN := main.exe
	BINARY_SECOND := second.exe
else
	RM := rm
	BINARY_MAIN := ./main
	BINARY_SECOND := ./second
endif

all: main second

main: main.cpp
	$(CXX) -o main main.cpp

second: second.cpp
	$(CXX) -o second second.cpp

clean:
	$(RM) *.o *.gch *.txt

run: all

	$(BINARY_MAIN) 12 > out.txt
	$(BINARY_SECOND)
