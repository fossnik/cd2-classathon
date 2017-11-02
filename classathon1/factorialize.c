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

int main(int argc, string argv[]) {
    int seeknumber;
    // use input arguments if provided
    if ((argc == 2) && atoi(argv[1]) > 0) {
        seeknumber = atoi(argv[1]);
    } else {
        printf("Usage: ./factorialize k\n"); return 1;
    }
    printf("%lld\n", factorialize(seeknumber));
}