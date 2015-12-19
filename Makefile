#Author: Carlos Carrillo
#Date:   09/24/2015
#Description: This is the makefile for Lab_1

#This target will compile the entire program

All: total

total:	MainDie.o Die.o LoadedDie.o 
	g++ MainDie.o Die.o LoadedDie.o -o die

MainDie.o: MainDie.cpp
	g++ -c MainDie.cpp

Die.o: Die.cpp
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp
	g++ -c LoadedDie.cpp

clean:
	rm -rf *o total