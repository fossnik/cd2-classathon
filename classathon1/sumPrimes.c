// sumPrimes

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int number);
int sum_primes(int num);

int main(int argc, char* argv[]) {
    int seeknumber;
    // use input arguments if provided
    if ((argc == 2) && atoi(argv[1]) > 0) {
        seeknumber = atoi(argv[1]);
    } else {
        printf("Usage: ./sumPrimes k\n"); return 1;
    }

    int result = sum_primes(seeknumber);
    printf("%d\n", result);
    return result;
}

bool is_prime(int number) {
    for(int i = 2; i < number/2; i++) {
        if (number % i == 0) { return 0; }
    }
    return 1;
}

int sum_primes(int num) {
    int total = 0;

    for(int j = 2; j <= num; j++) {
        if (is_prime(j)) { total += j; }
    }
    return total;
}