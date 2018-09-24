# We'll require g++ compiler for C++ language.


all: Lab2.exe

# Prepare the final executable
Lab2.exe: ListProcessor.o LinkedList.o Node.o
	g++ -o Lab2.exe ListProcessor.o LinkedList.o Node.o

# Compile ListProcessor.o
ListProcessor.o: ListProcessor.c LinkedList.h
	g++ -c ListProcessor.c

# Compile LinkedList.o
LinkedList.o: LinkedList.c LinkedList.h
	g++ -c LinkedList.c

# Compile Node.o
Node.o: Node.c Node.h
	g++ -c Node.c

# Compile the .c files

ListProcessor.c: ListProcessor.cpp LinkedList.h

LinkedList.c: LinkedList.cpp LinkedList.h

Node.c: Node.cpp Node.h

clean:
	rm *.exe *.o
