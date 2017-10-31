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

int main(void) {
    printf("Number to Factorialize:\n");
    int num = get_int();
    printf("%lld\n", factorialize(num));
}