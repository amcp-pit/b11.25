CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp stack.cpp test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=ex1

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -rf *.o $(EXECUTABLE)
