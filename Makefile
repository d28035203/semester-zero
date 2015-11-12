CC=gcc
CFLAGS=-Wall -Wextra -std=c99
all: patterns grades fib
patterns: patterns.c; $(CC) $(CFLAGS) -o $@ $<
grades: grades.c; $(CC) $(CFLAGS) -o $@ $<
fib: fibonacci.c; $(CC) $(CFLAGS) -o $@ $<
clean: ; rm -f patterns grades fib
.PHONY: all clean
