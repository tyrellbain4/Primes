CFLAGS=-ansi -g -O2 -pedantic -std=gnu18 -Wall -Werror -Wextra -DDONT_USE_VOL

all: PrimesBrute.exe PrimesFast.exe

%.exe: %.o
	$(CC) $(CFLAGS) -o $@ $^
