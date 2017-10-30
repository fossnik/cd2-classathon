#include <cs50.h>
#include <stdio.h>

long long factorialize(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorialize(num-1);
    }
}

int main(void) {
    printf("Number to Factorialize:\n");
    int num = get_int();
    printf("%lld\n", factorialize(num));
}