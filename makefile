lab3:lab3 lab3.cpp
	g++ -o lab3 lab3.cpp

labMain: labMain Clock.o Clock.h labMain.o
	g++ -o labMain Clock.o labMain.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

labMain.o: labMain.cpp Clock.h
	g++ -c labMain.cpp

clean:
	rm *.o lab3 labMain
