/* 12. Implement a function that doubles the value passed to it.
       Print the value inside the function and in main() to observe
       the difference. */

#include <stdio.h>

int doubleValue(int n) {
    n = n * 2;
    printf("Inside doubleValue: n = %d\n", n);
    return n;
}

int main() {
    int num = 8;

    printf("Before call: num = %d\n", num);
    doubleValue(num);
    printf("After call:  num = %d (unchanged)\n", num);

    return 0;
}
