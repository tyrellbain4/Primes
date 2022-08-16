CFLAGS=-Wall -Werror -Wextra -g -std=gnu18 -O3

all: primes_brute.exe primes_fast.exe

primes_brute.exe: primes_brute.c
	$(CC) $(CFLAGS) -o primes_brute.exe primes_brute.c

primes_fast.exe: primes_fast.c
	$(CC) $(CFLAGS) -o primes_fast.exe primes_fast.c