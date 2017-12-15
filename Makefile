main: Main.o ArrayStack.o
	g++ Main.o ArrayStack.o -o main

Main.o:	Main.cpp
	g++ -c Main.cpp

ArrayStack.o:	ArrayStack.cpp
	g++ -c ArrayStack.cpp
