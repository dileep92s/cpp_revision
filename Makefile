CC=gcc
CXX=g++
SRC=./src
INC=./inc
BIN=./bin
CXXFLAGS=-std=c++14 -I${INC} -Werror -Wall

hello_world: src/hello_world.cpp
	g++ src/hello_world.cpp -o bin/hello_world

class: ${SRC}/class.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

inheritance: ${SRC}/inheritance.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

check:
	cppcheck ${SRC}

.PHONY:clean
clean:
	rm -rf *.o