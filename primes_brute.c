#include <stdio.h>

int is_prime(int n) {
    for (int i=2; i <= n/2; i++) {
        if (!(n%i)) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int num = 250000;
    int num_primes = 0;

    for (int i=2; i<=num; i++) {
        num_primes += is_prime(i);
    }

    printf("Number of primes up to %d: %d\n", num, num_primes);
}