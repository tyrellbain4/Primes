#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct PrimeList {
    int prime;
    struct PrimeList* next;
};

int lessThan5(int num) {
    if (num < 3) {
        if (num < 2) {
            return 0;
        }
        return 1;
    }
    return 2;
}

int root_floor(int low, int high, int num) {

    if (low == high) return low;

    int num_floor = (low+high)/2;
    int square = pow(num_floor, 2);

    if (square > num) {
        return root_floor(low, num_floor-1, num);
    }
    else if (square < num) {
        int num_floor_next = num_floor+1;
        int square_next = pow(num_floor_next, 2);

        if (square_next > num) return num_floor;
        else return root_floor(num_floor_next, high, num);
    }

    return num_floor;
}

int is_prime(struct PrimeList** curr, struct PrimeList** head, int i) {

    int root = root_floor(2, i/2, i);

    for (*curr = *head; (*curr)->prime <= root; *curr = (*curr)->next) {
        if (!(i % (*curr)->prime)) {
            return 0;
        }
    }
    return 1;
}

void add_prime(struct PrimeList* curr, int new_prime) {

    while (curr->next != NULL) curr = curr->next;

    struct PrimeList* newNode = (struct PrimeList*)malloc(sizeof(struct PrimeList));
    newNode->prime = new_prime;
    newNode->next = NULL;
    curr->next = newNode;
    return;
}

void free_primes(struct PrimeList* curr) {

    if (curr->next != NULL) free_primes(curr->next);
    free(curr);
    return;
}

int main(int argc, char** argv) {

    int num;

    if (argc < 2) {
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    else num = atoi(argv[1]);

    printf("Executing primes_fast.c for %d...\n", num);

    if (num < 5) {
        printf("Number of primes up to %d: ", num);
        printf("%d\n", lessThan5(num));
        return 0;
    }

    int num_primes = 2;

    struct PrimeList* head = (struct PrimeList*)malloc(sizeof(struct PrimeList));
    head->prime = 3;
    head->next = NULL;
    struct PrimeList* curr = NULL;

    for (int i=5; i<=num; i+=2) {

        if (is_prime(&curr, &head, i)) {
            add_prime(curr, i);
            num_primes++;
        }
    }

    curr = head;
    free_primes(curr);

    printf("Number of primes up to %d: %d\n", num, num_primes);
    return 0;
}