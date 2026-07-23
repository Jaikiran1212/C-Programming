/* 1. Write a function that swaps two integers. Call it from main()
      and print the values before and after the function call.
      Observe whether the values in main() change. */

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

int main() {
    int a = 5, b = 10;

    printf("Before call: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After call:  a = %d, b = %d (unchanged)\n", a, b);

    return 0;
}
