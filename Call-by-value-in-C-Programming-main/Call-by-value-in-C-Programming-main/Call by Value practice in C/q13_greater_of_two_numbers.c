/* 13. Create a function to find the greater of two numbers. Pass
       them by value and return the greater one. */

#include <stdio.h>

int greater(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("greater(42, 17) = %d\n", greater(42, 17));
    return 0;
}
