CC = gcc
CFLAGS = -std=gnu90 -Wall -Wextra -pedantic -g

TARGET = bin/hello.exe
OBJECTS = lib/hello.o lib/looper.o
HEADER = src/ownlib.h

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

lib/hello.o: src/hello.c $(HEADER)
	$(CC) $(CFLAGS) -c src/hello.c -o lib/hello.o

lib/looper.o: src/looper.c $(HEADER)
	$(CC) $(CFLAGS) -c src/looper.c -o lib/looper.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: run clean