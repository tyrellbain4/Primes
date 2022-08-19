CFLAGS=-ansi -g -O2 -pedantic -std=gnu18 -Wall -Werror -Wextra -DDONT_USE_VOL

all: primes_brute.exe primes_fast.exe

%.exe: %.o
	$(CC) $(CFLAGS) -o $@ $^
