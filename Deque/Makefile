all: DQarraytest DQtest

DQarraytest: DQarraytest.o
	g++ DQarraytest.o -o DQarraytest

DQtest: DQtest.o
	g++ DQtest.o -o DQtest

DQarraytest.o: DQarraytest.cpp Deque.h
	g++ -c DQarraytest.cpp

DQtest.o: DQtest.cpp Deque.h
	g++ -c DQtest.cpp

clean:
	rm *.o DQarraytest DQtest