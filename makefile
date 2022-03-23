final: main.cpp account.o money.o
	g++ main.cpp account.o money.o -o final

account.o: account.cpp account.h
	g++ -c account.cpp

money.o: money.cpp money.h
	g++ -c money.cpp

clean:
	rm *.o