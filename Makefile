CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -O2
BINS=patterns grades fib
all: $(BINS)
patterns: patterns.c
	$(CC) $(CFLAGS) $< -o $@
grades: grades.c
	$(CC) $(CFLAGS) $< -o $@
fib: fib.c
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -f $(BINS)
