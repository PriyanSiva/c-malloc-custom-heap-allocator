CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = allocator
SRC = src/mian.c src/allocator.c

all:
	$(cc) $(CFLAGS) $(SRC) -o $(TARGET)

run: all	
	./$(TARGET)

clean:
	rm -f $(TARGET)

