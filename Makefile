CC=gcc
CXX=g++
SRC=./src
INC=./inc
BIN=./bin
CXXFLAGS=-std=c++14 -I${INC}

hello_world: src/hello_world.cpp
	g++ src/hello_world.cpp -o bin/hello_world

basic_class: ${SRC}/basic_class.cpp
	${CXX} ${CXXFLAGS} $^ -o ${bin}/$@

.PHONY:clean
clean:
	rm -rf *.o