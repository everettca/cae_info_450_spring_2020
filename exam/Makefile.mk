default: run

account.o:
	g++ -c account.cpp checking.cpp savings.cpp creditcard.cpp

run: account.o
	g++ -o account main.cpp account.o

clean:
	rm -f account.o account
