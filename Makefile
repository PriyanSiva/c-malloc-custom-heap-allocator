CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = allocator
SRC = src/main.c src/allocator.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all	
	./$(TARGET)

clean:
	rm -f $(TARGET)

