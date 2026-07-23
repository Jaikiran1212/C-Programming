/* 4. Write a function to compute the sum of two numbers. Pass two
      values and print the result in main(). */

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    printf("sum(15, 25) = %d\n", sum(15, 25));
    return 0;
}
