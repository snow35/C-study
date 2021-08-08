hi.o : hi.h hi.cc
	g++ -c hi.cc

hello.o : hello.h hello.cc
	g++ -c hello.cc

main.o : main.cc hi.h hello.h
	g++ -c main.cc

main : hi.o hello.o main.o
	g++ hi.o main.o -o main