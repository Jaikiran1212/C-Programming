/* 7. Write a function that sets a number to zero. Call it with a
      variable and check if the original value changes in main(). */

#include <stdio.h>

void setToZero(int n) {
    n = 0;
    printf("Inside setToZero: n = %d\n", n);
}

int main() {
    int num = 99;

    printf("Before call: num = %d\n", num);
    setToZero(num);
    printf("After call:  num = %d (unchanged)\n", num);

    return 0;
}
