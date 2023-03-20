CC=g++
FLAG=-Wall
EXE=cpp_playground.x
OBJ=playground.o my_class.o

all: $(EXE) 

my_class.o: my_class.cpp 
	$(CC) $(FLAG) -c my_class.cpp -o my_class.o

playground.o: playground.cpp 
	$(CC) $(FLAG) -c playground.cpp -o playground.o

$(EXE): $(OBJ) 
	$(CC) $(FLAG) $(OBJ) -o $(EXE) 

clean:
	rm *.x *.o

