output: main.o List.o
	g++ main.o List.o -o output

main.o: main.cpp
	g++ -c main.cpp

List.o: List.cpp List.h
	g++ -c List.cpp

clean:
	rm *.o output