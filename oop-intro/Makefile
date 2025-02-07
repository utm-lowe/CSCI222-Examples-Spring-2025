point: point.o main.o
	g++ point.o main.o -o point

point.o: point.cpp point.h
	g++ -c point.cpp

main.o: main.cpp point.h
	g++ -c main.cpp

clean:
	rm -f *.o point