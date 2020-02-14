CC=gcc
CXX=g++
SRC=./src
INC=./inc
BIN=./bin
CXXFLAGS=-std=c++14 -I${INC} -Wall -Werror

hello_world: src/hello_world.cpp
	g++ src/hello_world.cpp -o bin/hello_world

class_1: ${SRC}/class_1.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

class_2: ${SRC}/class_2.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

inheritance: ${SRC}/inheritance.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

namespace : ${SRC}/namespace.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

refrences : ${SRC}/refrences.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@
	
structs : ${SRC}/structs.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

check:
	cppcheck ${SRC}

.PHONY:clean
clean:
	rm -rf *.o