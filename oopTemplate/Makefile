run:
	./programOutputName

all: main.o testClass.o
	g++ main.o testClass.o -o programOutputName

clean:
	rm -rf *.o
	rm -rf programOutputName

main.o: main.cpp testClass.h
	g++ -c main.cpp

testClass.o: testClass.cpp testClass.h
	g++ -c testClass.cpp