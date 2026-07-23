/* 9. Create a function to compute the factorial of a number. Pass
      the number by value and return the result. */

#include <stdio.h>

long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("factorial(5) = %ld\n", factorial(5));
    return 0;
}
