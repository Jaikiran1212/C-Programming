/* 3. Write a function to increase a value by 10. Call it and show
      that the value in the caller remains the same. */

#include <stdio.h>

void increaseByTen(int n) {
    n = n + 10;
    printf("Inside increaseByTen: n = %d\n", n);
}

int main() {
    int num = 20;

    printf("Before call: num = %d\n", num);
    increaseByTen(num);
    printf("After call:  num = %d (unchanged)\n", num);

    return 0;
}
