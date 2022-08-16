#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    for (int i=2; i <= n/2; i++) {
        if (!(n%i)) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** argv) {

    printf("Starting primes_brute.c...\n");

    int num;

    if (argc < 2) {
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    else num = atoi(argv[1]);

    int num_primes = 0;

    for (int i=2; i<=num; i++) {
        num_primes += is_prime(i);
    }

    printf("Number of primes up to %d: %d\n", num, num_primes);
}