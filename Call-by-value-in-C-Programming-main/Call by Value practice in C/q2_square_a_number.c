/* 2. Create a function that squares a number. Show that the
      original variable in main() remains unchanged after the
      function call. */

#include <stdio.h>

int square(int n) {
    n = n * n;
    return n;
}

int main() {
    int num = 6;

    printf("Before call: num = %d\n", num);
    printf("square(num) = %d\n", square(num));
    printf("After call:  num = %d (unchanged)\n", num);

    return 0;
}
