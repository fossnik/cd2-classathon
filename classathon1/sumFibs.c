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

int main(int argc, string argv[]) {
    int seeknumber;
    // use input arguments if provided
    if ((argc == 2) && atoi(argv[1]) > 0) {
        seeknumber = atoi(argv[1]);
    } else {
        printf("Usage: ./sumFibs k\n"); return 1;
    }

    printf("%d\n", sumFibs(seeknumber));

    // return the int
    return sumFibs(seeknumber);
}