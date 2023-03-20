CC=g++
FLAG=-Wall
EXE=cpp_playground.x

all: $(EXE) 

playground.o: playground.cpp 
	$(CC) $(FLAG) -c playground.cpp -o playground.o

$(EXE): playground.o
	$(CC) $(FLAG) playground.o -o $(EXE) 

clean:
	rm *.x *.o

