SRC=Arkanoid.cpp
OBJ=Arkanoid.o

all:
	g++ -c ${SRC} -o ${OBJ}
	g++ ${OBJ} main.cpp -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17 -o main