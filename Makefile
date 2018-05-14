CXXFLAGS = -std=c++11 -pedantic -Werror -Wall -I. -g

CXX = g++

run: main.o
	$(CXX) $(CXXFLAGS) -o run main.o

main.o: main.cpp demo1.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f main.o run
	

