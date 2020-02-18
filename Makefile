CC=gcc
CXX=g++
SRC=./src
INC=./inc
BIN=./bin
CXXFLAGS=-std=c++11 -I${INC} -Wall -Werror

% : ${SRC}/%.cpp
	${CXX} ${CXXFLAGS} $^ -o ${BIN}/$@

# cheatsheet : https://devhints.io/makefile
