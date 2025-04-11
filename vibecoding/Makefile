# compile triangle test
traingleTest: triangleTest.o triangle.o
	g++ -o triangleTest triangleTest.o triangle.o

triangTest.o: triangleTest.cpp triangle.h
	g++ -c triangleTest.cpp

triangle.o: triangle.cpp triangle.h
	g++ -c triangle.cpp

clean:
	rm -f triangleTest triangleTest.o triangle.o