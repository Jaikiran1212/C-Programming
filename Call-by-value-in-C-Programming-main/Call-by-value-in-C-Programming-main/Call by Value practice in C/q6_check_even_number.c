/* 6. Write a function that checks if a number is even. Show how the
      value is passed to the function and verify the original
      variable is unaffected. */

#include <stdio.h>

int isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    int num = 14;

    printf("Before call: num = %d\n", num);
    printf("isEven(num) = %s\n", isEven(num) ? "Even" : "Odd");
    printf("After call:  num = %d (unchanged)\n", num);

    return 0;
}
