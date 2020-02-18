CC=gcc
CXX=g++
SRC=./src
INC=./inc
BIN=./bin
CXXFLAGS=-std=c++11 -I${INC} -Wall -Werror

test: src/test.cpp
	g++ src/test.cpp -o bin/test

sorting: ${SRC}/sorting.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

linked_lists: ${SRC}/linked_lists.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

hello_world: ${SRC}/hello_world.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

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

access : ${SRC}/access.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@	

fwd_declaration : ${SRC}/fwd_declaration.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@	

stl : ${SRC}/stl.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@	


all : stl access fwd_declaration structs refrences namespace inheritance

check:
	cppcheck ${SRC}

.PHONY:clean
clean:
	rm -rf *.o