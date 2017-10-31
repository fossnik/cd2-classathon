#include <cs50.h>
#include <stdio.h>

int sumFibs(int num) {
    int sum = 0, first = 0, second = 1, temp;

    for (int i = 0; second <= num; i++) {
        // only sum the odd numbers
        if (second % 2 != 0) {
            sum += second;
        }

        // iterate into the next fibonnaci number
        temp = second;
        second += first;
        first = temp;
    }
    return sum;
}

int main(void) {
    printf("Number to Fibonacci:\n");
    int num = get_int();

    printf("%d\n", sumFibs(num));

    return sumFibs(num);
}