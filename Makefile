SRC=Cola.cpp\
	Elemento.cpp\
	main.cpp

OBJ=Cola.o\
	Elemento.o\
	main.o

FLAGS=-Wall -std=c++17

all:
	g++ ${FLAGS} -c ${SRC}
	g++ ${OBJ} -o cola