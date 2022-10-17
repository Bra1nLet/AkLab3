all : 
	make main.o
	make second
main.o : calculator.cpp
	g++ -c calculator.cpp -o calculator

second : Somecode.cpp
	g++ -c Somecode.cpp -o program

clean :
	rm -rf *.o program calculator
