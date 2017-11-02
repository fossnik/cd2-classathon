#include <cs50.h>
#include <stdio.h>

long long factorialize(int num) {
    if (num == 1) {
        // base case
        return 1;
    } else {
        // recursion
        return num * factorialize(num-1);
    }
}

int main(int argc, char* argv[]) {
    if (!((argc == 2) && atoi(argv[1]) > 0)) {
        printf("Usage: ./factorialize k\n"); return 1;
    }
    long long result = factorialize(atoi(argv[1]));
    printf("%lld\n", result);
}