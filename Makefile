# File: Makefile
# Author: Brett Whitson/Lucian Freeze
# Desc: A makefile for the associative array program

# Compiler version
CC = g++

# Debugging flag -g
DEBUG = -g

# Compile with all errors and warnings
CFLAGS = -c -Wall $(DEBUG)

# Target exec
TARGET = exec

all: $(TARGET)

$(TARGET): main.o bst.o
	$(CC) main.o bst.o -o $(TARGET)

main.o: main.cpp bst.h
	$(CC) $(CFLAGS) main.cpp
bst.o: bst.cpp bst.h
	$(CC) $(CFLAGS) bst.cpp
node.o: node.cpp
	$(CC) $(CFLAGS) node.cpp
clean:
	rm *.o *~ $(TARGET)