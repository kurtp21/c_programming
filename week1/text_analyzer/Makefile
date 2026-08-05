CC = gcc
CFLAGS = -std=gnu90 -Wextra -Wall -pedantic -g
CPPFLAGS = -Iinclude

TARGET = bin/text_analyzer.exe
OBJECTS = lib/text_analyzer.o lib/string_utils.o
HEADER = include/string_utils.h

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

lib/text_analyzer.o: src/main.c $(HEADER)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/main.c -o lib/text_analyzer.o

lib/string_utils.o: src/string_utils.c $(HEADER)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c src/string_utils.c -o lib/string_utils.o

.PHONY = run clean

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
