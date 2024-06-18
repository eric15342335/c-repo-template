CC = gcc
WARNINGS = -Wall -Wextra -Werror -pedantic \
-Wcast-qual -Wundef -Wswitch -Wshadow -Wconversion -Wfloat-equal
INCLUDES = -Iinclude
DEBUGGING = -g
CFLAGS = $(WARNINGS) $(INCLUDES) $(DEBUGGING)

default: dice
dice.o: src/dice.c include/dice.h
	$(CC) $(CFLAGS) -c $<
main.o: src/main.c include/dice.h
	$(CC) $(CFLAGS) -c $<
dice: dice.o main.o
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o || true

.PHONY: clean
